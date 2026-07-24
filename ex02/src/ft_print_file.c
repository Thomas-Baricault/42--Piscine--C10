/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:04:47 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/11 15:10:42 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	ft_print_error_file(char *name, char *path)
{
	ft_print_str(2, name);
	ft_print_str(2, ": cannot open '");
	ft_print_str(2, path);
	ft_print_str(2, "' for reading: ");
	ft_print_str(2, strerror(errno));
	ft_print_str(2, "\n");
	return (1);
}

int	ft_print_file(char *name, char *path, int bytes, int file_i)
{
	int	fd;

	if (path[0] == '-' && path[1] == '\0')
	{
		fd = 0;
		path = "standard input";
	}
	else
		fd = open(path, O_RDONLY);
	if (fd == -1)
		return (ft_print_error_file(name, path));
	if (file_i > 0)
		write(1, "\n", 1);
	if (file_i != -1)
	{
		ft_print_str(1, "==> ");
		ft_print_str(1, path);
		ft_print_str(1, " <==\n");
	}
	ft_print_fd(fd, bytes);
	if (fd != 0)
		close(fd);
	return (0);
}
