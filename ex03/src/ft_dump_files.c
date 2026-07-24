/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dump_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:25:31 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/15 16:09:15 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"
#include <stdio.h>

void	ft_file_error(char *name, char *path)
{
	ft_print_str(2, basename(name));
	ft_print_str(2, ": ");
	ft_print_str(2, path);
	ft_print_str(2, ": ");
	ft_print_str(2, strerror(errno));
	ft_print_str(2, "\n");
	return ;
}

int	ft_open_file(char *name, char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		ft_file_error(name, path);
	return (fd);
}

void	ft_print_all_file_failed(char *name)
{
	ft_print_str(2, basename(name));
	ft_print_str(2, ": all input file arguments failed\n");
	return ;
}

int	ft_dump_files(t_data *data, int argc, char **argv, int details)
{
	int	error;
	int	i;
	int	fd;

	error = 0;
	i = 0;
	while (++i < argc)
	{
		if (argv[i])
		{
			fd = ft_open_file(argv[0], argv[i]);
			if (fd == -1)
				error++;
			else
			{
				if (ft_dump_fd(data, fd, details))
					ft_file_error(argv[0], argv[i]);
				close(fd);
			}
		}
	}
	if (error == argc - details - 1)
		ft_print_all_file_failed(argv[0]);
	return (error > 0);
}
