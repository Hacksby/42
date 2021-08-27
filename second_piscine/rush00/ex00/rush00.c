/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:33:25 by alsilvan          #+#    #+#             */
/*   Updated: 2021/06/27 14:02:51 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printer(int max_column, int max_row, int column_index, int row_index)
{
	if ((column_index == 1) || (column_index == max_column))
	{
		if ((row_index == 1) || (row_index == max_row))
			ft_putchar('o');
		else if ((row_index > 1) && (row_index < max_row))
			ft_putchar('|');
	}
	else if ((column_index > 1) && (column_index < max_column))
	{
		if ((row_index == 1) || (row_index == max_row))
			ft_putchar('-');
		else if ((row_index > 1) && (row_index < max_row))
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	column;
	int	row;

	row = 1;
	if (x > 0 && y > 0)
	{
		while (row <= y)
		{
			column = 1;
			while (column <= x)
			{
				ft_printer(x, y, column, row);
				column++;
			}
			ft_putchar('\n');
			row++;
		}
	}
}
