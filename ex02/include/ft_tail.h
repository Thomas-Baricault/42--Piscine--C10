/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:10:12 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/10 12:00:35 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <errno.h>
# include <fcntl.h>
# include <libgen.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_atoi(char *str);
void	ft_print_fd(int fd, int bytes);
int		ft_print_file(char *name, char *str, int bytes, int file_i);
void	ft_print_str(int output, char *str);
int		ft_read_count(int argc, char **argv);
int		ft_strcmp(char *a, char *b);

#endif
