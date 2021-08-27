/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 10:39:13 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/15 14:19:28 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_check_valid(char *buff, st_params *st_input)
{
	int		i;
	int		row;
	int		error;
	char	header[20];

	i = 0;
	row = 0;
	error = 0;
	while (buff[i] != '\0' && error != -1)
	{
		if (row == 0)
		{
			if (buff[i] != '\n')
				header[i] = buff[i];
			else
				error = ft_check_header(header, i - 1, st_input);
		}
		else if (buff[i] != '\n')
		{
			if(buff[i] != st_input->obstacle  && buff[i] != st_input->empty)
				error = -1;
			st_input->p_obs[row][i] = buff[i];
			if (row == 1)
				st_input->ref_col++;
			st_input->next_col++;
		}
		else
		{
			st_input->input_rows++;
			if (st_input->ref_col != st_input->next_col)
				error = -1;
		}
		if (buff[i] == '\n')
		{ 
			st_input->next_col = 0;
			row++;
		}
		i++;
	}
	if (st_input->input_rows != row - 1)
	{
		error = -1;
	}
	return (error);
}

int	ft_check_header(char *header, int len, st_params *st_input)
{
	int	i;
	int j;
	int	error;

	error = 0;
	i = 0;
	if (st_input)
	{
		while (i <= len && error != -1)
		{
			j = i + 1;
			while (j <= len && error != -1)
			{
				if (header[i] == header[j])
					error = -1;
				j++;
			}
			i++;
		}
	}
	if (error != -1)
		error = ft_check_header_chars(header, len, st_input);
	return (error);
}

int	ft_check_header_chars(char *header, int len, st_params *st_input)
{
	int	i;

	i = 0;
	while (i <= len - 3)
    {
        if (header[i] >= 48 && header[i] <= 57)
        {
            st_input->input_rows *= 10 + (header[i] - 48);
            i++;
        }
        else
            return (-1);
    }
	st_input->fill = header[len];
    st_input->obstacle = header[len - 1];
    st_input->empty = header[len - 2];
	return (0);
}
