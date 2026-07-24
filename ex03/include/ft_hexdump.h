/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:15:20 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/15 07:32:49 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H

# include <errno.h>
# include <fcntl.h>
# include <libgen.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_data
{
	unsigned int	addr;
	int				size;
	char			buffer[16];
	int				is_first;
	char			previous[16];
	int				was_stared;
}	t_data;

int		ft_dump_fd(t_data *data, int fd, int details);
int		ft_dump_files(t_data *data, int argc, char **argv, int details);
void	ft_print_addr(unsigned int addr, int i, int details);
void	ft_print_hex(t_data *data, int details);
void	ft_print_line(t_data *data, int details);
void	ft_print_readable(t_data *data);
void	ft_print_str(int output, char *str);
int		ft_read_line(int fd, t_data *data);
int		ft_strcmp(char *a, char *b);

#endif
