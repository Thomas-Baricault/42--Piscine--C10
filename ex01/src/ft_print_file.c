/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:04:47 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/11 15:05:03 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	ft_print_file(char *path)
{
	int	fd;
	int	result;

	if (path[0] == '-' && path[1] == '\0')
		return (ft_print_fd(0));
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (1);
	result = ft_print_fd(fd);
	close(fd);
	return (result);
}
