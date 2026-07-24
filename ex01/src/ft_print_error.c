/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:51:37 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/09 18:34:30 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_print_error(char *name, char *input)
{
	ft_print_str(2, name);
	ft_print_str(2, ": ");
	ft_print_str(2, input);
	ft_print_str(2, ": ");
	ft_print_str(2, strerror(errno));
	ft_print_str(2, "\n");
	return ;
}
