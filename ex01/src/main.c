/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:48:59 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/10 18:13:54 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	main(int argc, char **argv)
{
	int	error;
	int	i;

	error = 0;
	if (argc == 1 && ft_print_fd(0) && ++error)
		ft_print_error(argv[0], "stdin");
	else if (argc > 1)
	{
		i = 0;
		while (++i < argc)
			if (ft_print_file(argv[i]) && ++error)
				ft_print_error(argv[0], argv[i]);
	}
	return (error > 0);
}
