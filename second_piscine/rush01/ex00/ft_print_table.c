/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 12:41:20 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/04 16:59:32 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_table(void)
{
	int	row;
	int	column;

	row = 0;
	column = 0;

	while (row < 4)
	{
		while (column < 4)
		{
			ft_putchar(column + 48);
			column++;
		}
		ft_putchar('\n');
		column = 0;
		row++;
	}
}
