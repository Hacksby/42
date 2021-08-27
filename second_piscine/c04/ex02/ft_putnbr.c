/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 11:46:29 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/13 12:38:16 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int nb)
{
	int	operator;
	int	store_number[10];
	int	index;

	index = 0;
	operator = 1000000000;
	if (nb == 0)
		ft_putchar('0');
	else
	{
		while (index < 10)
		{
			store_number[index] = nb % 10;
			nb /= 10;
			index++;
		}
		index--;
		while (store_number[index] == 0)
			index--;
		while (index >= 0)
		{
			ft_putchar(store_number[index] + 48);
			index--;
		}
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	ft_print(nb);
}
