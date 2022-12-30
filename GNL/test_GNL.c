#define BUFFER_SIZE 512
 
typedef struct myFile
{
	int fd;
	char bufferLecture[BUFFER_SIZE];
	size_t tailleLecture; /*Taille du contenu actuel du buffer de lecture*/
	size_t positionLecture; /*Position du prochain caractère à être lu depuis le buffer*/
 
	char bufferEcriture[BUFFER_SIZE];
	size_t tailleEcriture; /*Taille du contenu actuel du buffer d'ecriture*/
	size_t positionEcriture; /*Position du prochain caractère à être lu depuis le buffer*/
} MY_FILE;
 
MY_FILE* my_fdopen(int fd)
{
	/*Pas besoin de caster si tu utilises un compilateur C*/
	MY_FILE* pf = malloc(sizeof *pf);
	if(pf != NULL)
	{
		MY_FILE empty = {0};
		*pf = empty;
		pf->fd = fd;
	}
	return pf;
}
 
int my_getc(MY_FILE* pf)
{
	/*Faut-il lire depuis le fichier pour remplir le buffer?*/
	if(pf->positionLecture >= pf->tailleLecture)
	{
		int nbRead;
		pf->tailleLecture = 0;
		pf->positionLecture = 0;
		nbRead = read(pf->fd, pf->bufferLecture, BUFFER_SIZE);
		if(nbRead <= 0)
			return EOF;
		pf->tailleLecture = nbRead;
	}
 
	/*Lit un caractère dans le buffer*/
	{
		char ret = pf->bufferLecture[pf->positionLecture];
		pf->positionLecture++;
		return ret;
	}
}

#define LINE_BUFFER_SIZE 80
 
int realloc_char(char **ppMem, size_t nNew)
{
	int ret = -1;
	char * pNew = realloc(*ppMem, nNew * sizeof(**ppMem));
	if(pNew != NULL || nNew==0)
	{
		*ppMem = pNew;
		ret = 0;
	}
	return ret;
}
 
int append_char(char **ppBuffer, size_t *pTaille, size_t *pPosition, char ch)
{
	if(*ppBuffer == NULL || *pPosition >= *pTaille) /*Faut-il agrandir?*/
	{
		/*Calcul nouv. taille buffer: Anc. taille *1.5, + cas particuliers*/
		size_t newTaille;
		if(*pTaille == 0)
			newTaille = LINE_BUFFER_SIZE;
		else
		{
			size_t increase = (*pTaille) / 2;
			if(increase == 0) /*Ceci n'arrive que pour une taille de 1,*/
				increase++;   /*Mais il faut pouvoir le supporter.*/
			newTaille = *pTaille + increase;
			if(*pPosition >= newTaille)
				newTaille = *pPosition + 1;
		}
		if(!realloc_char(ppBuffer, newTaille)) /*Et maintenant on agrandit*/
			return -1;
		*pTaille = newTaille;
	}
	(*ppBuffer)[ *pPosition ] = ch;
	(*pPosition)++;
 
 int free_and_return(void *pMem, int returnValue)
{
	free(pMem);
	return returnValue;
}
 
int get_next_line(MY_FILE *pf, char **ppLine)
{
	size_t tailleBuffer = LINE_BUFFER_SIZE;
	char *buffer = malloc(tailleBuffer * sizeof *buffer);
	*ppLine = NULL;
	if(buffer != NULL)
	{
		size_t positionBuffer = 0;
		int c;
		while((c=my_getc(pf)) != EOF && c!='\n')
		{
			if(!append_char(&buffer, &tailleBuffer, &positionBuffer, (char)c))
				return free_and_return(buffer, -1);
		}
		/*Ajoute caractere nul*/
		if(!append_char(&buffer, &tailleBuffer, &positionBuffer, '\0'))
			return free_and_return(buffer, -1);
		*ppLine = buffer;
		return (int)positionBuffer - 1; /*Carac nul non compte, comme strlen*/
	}
	return -1;
}       return 0;
}
