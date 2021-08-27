/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 13:33:51 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/01 12:38:50 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write (1, &x, 1);
}

void	print_number(int nb)
{
	int	index;
	int	operator;
	int	values[11];

	index = 0;
	operator = 1000000000;
	while (index < 11)
	{
		values[index] = nb % 10;
		nb = nb / 10;
		index++;
	}
	index--;
	while (values[index] == 0)
		index--;
	while (index >= 0)
	{
		ft_putchar(values[index] + 48);
		index--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb > -2147483648 && nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
		print_number(nb);
	}
	else if (nb == 0)
	{
		ft_putchar('0');
	}
	else if (nb == -2147483648)
	{
		nb = (nb * -1);
		nb = (nb - 8) / 10;
		ft_putchar('-');
		print_number(nb);
		ft_putchar('8');
	}
	else
		print_number(nb);
}
