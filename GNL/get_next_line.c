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


#include <stdio.h>
#include "get_next_line.h"

int	main()
{
	int    fd;
	char *line;

	fd = open("./bible.txt", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		printf("%s", line);
		free(line);
	}
	return (0);
}
