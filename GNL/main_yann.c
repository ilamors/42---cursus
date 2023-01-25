/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 22:50:35 by lmorsli           #+#    #+#             */
/*   Updated: 2023/01/23 22:51:15 by lmorsli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		char *line;
		int fd;

		fd = open(av[1], O_RDONLY);
		line = get_next_line(fd);
		printf("%s\n", line);
		free(line);
		line = get_next_line(fd);
		printf("%s\n", line);
		free(line);
		close(fd);
	}
}
