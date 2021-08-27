/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:45:16 by alsilvan          #+#    #+#             */
/*   Updated: 2021/08/04 19:03:03 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_test_digits(int negative)
{
	if (negative == -1)
		return (0);
	else
		return (-1);
}

int	ft_atoi(const char *str)
{
	int	negative;
	int	number;
	int	digits;

	negative = 1;
	number = 0;
	digits = 0;
	while (*str < 14 || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = -1;
		str++;
	}
	while (*str > 47 && *str < 58)
	{
		number = number * 10 + (*str - 48);
		str++;
		digits++;
	}
	if (digits > 18)
		return (ft_test_digits (negative));
	return (number * negative);
}
