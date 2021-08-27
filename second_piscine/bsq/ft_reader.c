/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 09:37:20 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/15 14:20:04 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_reader(char *argv, char *buff, int buff_size)
{
	int 	size;
	int		file;

	file = open(argv, O_RDWR);
	if (file == -1)
		write (1, "map error\n", 9);
	else
	{
		size = read(file,buff,buff_size);
		buff[size] = '\0';
	}

	close(file);
	return (file);
}
