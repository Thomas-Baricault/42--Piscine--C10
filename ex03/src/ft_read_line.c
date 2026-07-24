/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:28:01 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/15 07:17:58 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int	ft_read_line(int fd, t_data *data)
{
	int	size;

	if (data->size == 16)
		return (0);
	size = read(fd, data->buffer + data->size, 16 - data->size);
	if (size > 0)
		data->size += size;
	return (size);
}
