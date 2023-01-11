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

static char		*line_to_print(char *str)
{
	int		i;
	char	*line_to_print;

	i = 0;
	while (str && str[i] != '\0' && str[i] != '\n')
	{
		if (str[i] == '\n')
			break ;
		i++;
	}
	line_to_print = ft_strsub(str, 0, i);
	return (line_to_print);
}

char			*new_str(char *str, char *new_str)
{
	if (str && (ft_strchr(str, '\n')))
	{
		new_str = ft_strchr(str, '\n') + 1;
		new_str = ft_strdup(new_str);
		free(str);
		str = new_str;
	}
	else if (str && (ft_strchr(str, '\0')))
	{
		new_str = ft_strchr(str, '\0');
		new_str = ft_strdup(new_str);
		free(str);
		str = new_str;
	}
	return (new_str);
}

int				get_next_line(const int fd, char **line)
{
	static char		*temp[4864];
	char			buffer[BUFF_SIZE + 1];
	char			*tempmem;
	int				readresult;

	if (fd < 0 || line == NULL || fd >= 4864 || read(fd, buffer, 0) < 0)
		return (-1);
	while ((readresult = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		if (!temp[fd])
			temp[fd] = ft_strnew(BUFF_SIZE);
		buffer[readresult] = '\0';
		tempmem = ft_strjoin(temp[fd], buffer);
		free(temp[fd]);
		temp[fd] = tempmem;
		ft_bzero(buffer, BUFF_SIZE);
	}
	if (temp[fd] && *temp[fd] == '\0')
		return (readresult);
	*line = line_to_print(temp[fd]);
	temp[fd] = new_str(temp[fd], tempmem);
	return (1);
}

/////////////////////////////////////////////////////


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

char	*get_next_line(int fd)
{
	static char	*str;
	char		*buf;
	char		*line;
	char		*tmp;

	tmp = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	str = ft_read(fd, buf, tmp, str);
	if (!str)
		return (NULL);
	line = ft_before(str);
	str = ft_after(str);
	return (line);
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
