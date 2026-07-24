/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:21:36 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/15 07:40:06 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int	main(int argc, char **argv)
{
	int		error;
	t_data	data;
	int		details;
	int		i;

	data.addr = 0;
	data.size = 0;
	data.buffer[0] = '\0';
	data.is_first = 1;
	details = 0;
	i = 0;
	while (++i < argc)
		if (ft_strcmp(argv[i], "-C") == 0 && ++details)
			argv[i] = NULL;
	if (argc - details == 1)
		error = ft_dump_fd(&data, 0, details);
	else
		error = ft_dump_files(&data, argc, argv, details);
	if (data.size)
		ft_print_line(&data, details);
	if (data.addr)
		ft_print_line(&data, details > 0);
	return (error);
}
