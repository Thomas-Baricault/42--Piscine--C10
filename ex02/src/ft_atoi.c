/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:08:50 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/10 11:28:48 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str)
	{
		if (!('0' <= *str && *str <= '9'))
			return (-1);
		result = result * 10 + (*str++) - '0';
	}
	return (result);
}
