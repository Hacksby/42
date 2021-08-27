/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 09:19:22 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/15 13:07:20 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef	struct	st_params
{
	int		input_rows;
	int		real_rows;
	char	**p_obs;
	char	ref_col;
	char	next_col;
	char	index_row;
	char	empty;
	char	obstacle;
	char	fill;	
}				st_params;

void	ft_putchar(char c);
void	ft_initialize_structs(st_params *st_input);
int		ft_reader(char *argv, char *buff, int b_size);
void	ft_start_analize(char *buff, st_params *st_input);
int		ft_check_valid(char *buff, st_params *st_input);
int		ft_check_header(char *header, int len, st_params *st_input);
int		ft_check_header_chars(char *header, int len, st_params *st_input);
#endif // HEADER_H
