/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 14:46:47 by lmorsli           #+#    #+#             */
/*   Updated: 2022/12/26 14:50:09 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*
Cette fonction malloc un char * a la taille de la stash + 2 
parceaue dans get stash on sarrete avanet le retour a la ligne dans le line_len
et on ajoute le end of string \0
elle revoie donc sous forme de ligne la stash
*/

char	*get_line(char *temp)
{
	int		i;
	char	*line;

	i = 0;
	if (!temp[i])
		return (NULL);
	line = (char *)malloc(sizeof(char) * (ft_strlen(temp) + 2));
	if (!line)
		return (NULL);
	while (temp[i] && temp[i] != '\n')
	{
		line[i] = temp[i];
		i++;
	}
	if (temp[i] == '\n')
	{
		line[i] = temp[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}
/*
Cette fonction recupere le fd du fichier ouvert
et stock le BUFFER SIZE dans idx, si read echoue idx = -1 
on free et on return NULL
verifi que le malloc sest bien passer sinon NULL // malloc + 1 endofchar
On raoute un '\0' à la fin de la chaine lut, 
pour être sur d'avoir une chaine de caractères valide
*/

char	*get_temp(int fd, char *temp)
{
	char	*buff;
	int		i;

	buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	i = 1;
	while (!ft_strchr(temp, '\n') && i != 0)
	{
		i = read(fd, buff, BUFFER_SIZE);
		if (i == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[i] = '\0';
		temp = ft_strjoin(temp, buff);
	}
	free(buff);
	return (temp);
}
/*
Cette fonction vide la stash de la ligne recup ddans line
*/

char	*new_stash(char *temp)
{
	int		i;
	int		j; //index new_stash;
	char	*new_stash;

	i = 0;
	j = 0;
	while (temp[i] && temp[i] != '\n')
		i++;
	if (!temp[i])
	{
		free(temp);
		return (NULL);
	}
	new_stash = (char *)malloc(sizeof(char) * (ft_strlen(temp) - i + 1));
	if (!new_stash)
		return (NULL);
	i++;
	while (temp[i])
		new_stash[j++] = temp[i++];
	new_stash[j] = '\0';
	free(temp);
	return (new_stash);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*temp;

	if (fd < 0 || line == NULL || fd >= 1023 || read(fd, buffer, 0) <= 0)
		return(-1);
	temp = get_temp(fd, temp);
	if (!temp)
		return (NULL);
	line = get_line(temp);
	temp = new_stash(temp);
	return (line);
}
#include "get_next_line.h"

static size_t	ft_track_end_line(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return(NULL);
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
		return (1);
	}
	return(0);
}

static char		*line_to_print(char *str)
{
	int		i;
	char	*line_to_print;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
	{
		if (str[i] == '\n')
			break ;
		i++;
	}
	line_to_print = ft_strlcpy(str, 0, i);
	return (line_to_print);
}

char	ft_store(char *s)

while ((read_line = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		if (!reserve) 
		reserve = ft_strlcpy(reserve, buff, BUFFER_SIZE);
		else
		reserve = ft_strjoin(reserve, buff);
	}

char	*get_next_line(int fd)
{
	static char	*reserve;
	char	line;
	size_t read_line;

	if (fd < 0 || line == NULL || fd >= 4864 || read(fd, buff, 0) < 0)
		return(NULL);
	
}

/////////////////////////////////////////////////////

//on cree un tmp pour stocker les donnees du buffer
//curseur au debut verifie si la string existe ou qu il y a du texte
//read avance le curseur du nombre de bytes
//copie le nombre de byte et retourne le nb de byte copiee.
// on met ca dans notre fichier temporaire
//on rearde ce qu il y a dedans
//verifie retour a la ligne
//si pas de retour a la ligne
//relance read jusqu a avoir un retour a la ligne
//si retour a la ligne on va vouloir extraire cette ligne de la variable temporaire.
//on va creer une autre variable pour pouvoir extraire les caracteres et le retour  a la ligne a la fin
// il faut nettoyer la reserve et get next lign renverra une ligne a la fois 
// get next line renvoie alors la valeur de ligne a avoir le nombre de bytes extrait lors de ce premier tour
//get next line sera donc relance autant de fois que necessaire et lira donc notre fichier jusqu a /la fin, ligne par ligne, et nous renverra une ligne a la fois

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd = open("bible2.txt", O_RDONLY);
	int a = 1;
	char *line;
	while (a)
	{
		line = get_next_line(fd);
		printf("res = %s", line);
		if(!line)
			a = 0;
		free(line);
	}
	// line = get_next_line(fd);
	// printf("%s", line);
	//line = get_next_line(fd);
	//printf("%s", line);
	//free(line);

}
