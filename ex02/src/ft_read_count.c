/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 08:56:32 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/14 10:04:50 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	ft_error_missing_arg(char *name)
{
	ft_print_str(2, name);
	ft_print_str(2, ": option requires an argument -- 'c'\nTry '");
	ft_print_str(2, name);
	ft_print_str(2, " --help' for more information.\n");
	return (-2);
}

int	ft_error_nbytes(char *name, char *arg)
{
	ft_print_str(2, name);
	ft_print_str(2, ": invalid number of bytes: ‘");
	ft_print_str(2, arg);
	ft_print_str(2, "’\n");
	return (-2);
}

int	ft_read_count(int argc, char **argv)
{
	int	i;
	int	count;

	i = -1;
	count = -1;
	while (++i < argc)
	{
		if (ft_strcmp(argv[i], "-c") == 0)
		{
			if (i == argc - 1)
				return (ft_error_missing_arg(argv[0]));
			else
			{
				count = ft_atoi(argv[i + 1]);
				if (count < 0)
					return (ft_error_nbytes(argv[0], argv[i + 1]));
			}
			argv[i] = NULL;
			i++;
			argv[i] = NULL;
		}
	}
	return (count);
}
