/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:12:07 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/10 20:28:27 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	ft_count_files(int argc, char **argv)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (++i < argc)
		count += (argv[i] != NULL);
	return (count);
}

int	ft_run_files(int argc, char **argv, int bytes)
{
	int	error;
	int	i;
	int	file_i;
	int	file_count;

	error = 0;
	file_i = 0;
	file_count = ft_count_files(argc, argv);
	i = 0;
	while (++i < argc)
	{
		if (argv[i])
		{
			if (file_count > 1)
			{
				if (ft_print_file(argv[0], argv[i], bytes, file_i))
					error |= 1;
				else
					file_i++;
			}
			else
				error |= ft_print_file(argv[0], argv[i], bytes, -1);
		}
	}
	return (error);
}

int	main(int argc, char **argv)
{
	int	error;
	int	bytes;

	error = 0;
	bytes = ft_read_count(argc, argv);
	if (bytes < 0)
		error = 1;
	else if (bytes != 0)
	{
		if (ft_count_files(argc, argv) == 0)
			ft_print_fd(0, bytes);
		else
			error |= ft_run_files(argc, argv, bytes);
	}
	return (error);
}
