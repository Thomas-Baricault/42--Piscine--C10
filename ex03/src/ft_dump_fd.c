/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dump_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:58:09 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/15 15:57:03 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int	ft_dump_fd(t_data *data, int fd, int details)
{
	int	result;

	result = 1;
	while (result)
	{
		result = ft_read_line(fd, data);
		if (result < 0)
			return (1);
		if (data->size == 16)
			ft_print_line(data, details);
	}
	return (0);
}
