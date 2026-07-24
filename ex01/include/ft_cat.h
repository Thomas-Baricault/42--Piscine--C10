/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:52:23 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/09 18:48:42 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <errno.h>
# include <fcntl.h>
# include <libgen.h>
# include <string.h>
# include <unistd.h>

void	ft_print_error(char *name, char *input);
int		ft_print_fd(int fd);
int		ft_print_file(char *path);
void	ft_print_str(int output, char *str);

#endif
