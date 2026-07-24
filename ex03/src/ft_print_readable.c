/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_readable.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:18:24 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/15 07:22:58 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_print_readable(t_data *data)
{
	int	i;

	i = -1;
	write(1, "|", 1);
	while (++i < data->size)
	{
		if (32 <= data->buffer[i] && data->buffer[i] <= 126)
			write(1, data->buffer + i, 1);
		else
			write(1, ".", 1);
	}
	write(1, "|", 1);
	return ;
}
