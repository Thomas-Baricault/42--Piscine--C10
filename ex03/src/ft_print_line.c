/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:45:29 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/15 07:38:22 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int	ft_strequ(char *a, char *b, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		if (a[i] != b[i])
			return (0);
	return (1);
}

void	ft_dump_line(t_data *data, int details)
{
	ft_print_addr(data->addr, 0, details);
	if (data->size)
	{
		write(1, " ", 1);
		if (details)
			write(1, " ", 1);
		ft_print_hex(data, details);
		if (details)
		{
			write(1, "  ", 2);
			ft_print_readable(data);
		}
	}
	write(1, "\n", 1);
	return ;
}

void	ft_print_line(t_data *data, int details)
{
	int	i;

	if (data->is_first || data->size < 16
		|| !ft_strequ(data->buffer, data->previous, 16))
	{
		i = 1;
		if (details)
			i = details;
		while (i--)
			ft_dump_line(data, details);
		i = -1;
		while (++i < data->size)
			data->previous[i] = data->buffer[i];
		data->was_stared = 0;
	}
	else if (!data->was_stared)
	{
		data->was_stared = 1;
		ft_print_str(1, "*\n");
	}
	data->addr += data->size;
	data->size = 0;
	data->is_first = 0;
	return ;
}
