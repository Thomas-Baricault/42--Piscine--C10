/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:57:43 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/13 10:16:29 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	read_all(int fd)
{
	int		size;
	char	buffer[256];

	while (1)
	{
		size = read(fd, buffer, 256);
		if (size <= 0)
			break ;
		else
			write(1, buffer, size);
	}
	return ;
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			write(2, "Cannot read file.\n", 18);
		else
		{
			read_all(fd);
			close(fd);
		}
	}
	return (0);
}
