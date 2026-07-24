/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:42:49 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/15 07:49:51 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_push_str(char *str, char c, int bytes, int size)
{
	int	i;

	if (size < bytes)
	{
		str[size] = c;
		return ;
	}
	i = -1;
	while (++i < bytes - 1)
		str[i] = str[i + 1];
	str[i] = c;
	return ;
}

void	ft_print_fd(int fd, int bytes)
{
	char	c;
	char	*buffer;
	int		size;

	buffer = malloc(sizeof(char) * bytes);
	size = 0;
	while (1)
	{
		if (read(fd, &c, 1) != 1)
		{
			write(1, buffer, size);
			free(buffer);
			return ;
		}
		ft_push_str(buffer, c, bytes, size);
		if (size < bytes)
			size++;
	}
	return ;
}
