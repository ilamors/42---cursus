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



size_t	read (int fildes, void *buffer, size_t n)
	int	tmp;
	int	dest;
	
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

void search and extract

void join 

char *get_next_line(int fd)
{
	char *dest;
	char temp;
	File *fp;

	fp = fopen(test.txt, "r")


	dest = malloc(sizeof(*char) * buffer_size + 1)
	if (!dest)
	return (NULL);

}

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;
 
	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (2);
	while (get_next_line(fd, &line) == 1)
	{
		putendl(line);
		free(line);
	}
	if (argc == 2)
		close(fd);
}
