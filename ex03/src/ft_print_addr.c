/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_addr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:18:24 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/15 07:38:38 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_print_addr(unsigned int addr, int i, int details)
{
	char	c;

	if (i < (7 - (details == 0)))
		ft_print_addr(addr / 16, i + 1, details);
	c = addr % 16;
	if (c <= 9)
		c += '0';
	else
		c += 'a' - 10;
	write(1, &c, 1);
	return ;
}
