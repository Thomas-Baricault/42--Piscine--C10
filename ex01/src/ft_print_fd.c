/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:42:49 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/13 10:25:41 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	ft_print_fd(int fd)
{
	int		size;
	char	buffer[256];

	while (1)
	{
		size = read(fd, buffer, sizeof(buffer));
		if (size == 0)
			return (0);
		if (size < 0)
			return (1);
		write(1, buffer, size);
	}
}
