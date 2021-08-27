/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 11:33:16 by alsilvan          #+#    #+#             */
/*   Updated: 2021/08/26 11:33:21 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int	ft_operator(int n)
{
	int	operator;
	int	digits;

	operator = 1;
	if (n == 0)
		return (1);
	digits = ft_digits(n);
	if (n < 0)
		digits--;
	while (--digits)
		operator *= 10;
	return (operator);
}

char	*ft_itoa(int n)
{
	char		*s;
	long int	m;
	int			operator;
	int			i;

	m = (long int)n;
	operator = ft_operator(n);
	s = (char *)malloc(sizeof(*s) * ft_digits(m) + 1);
	if (!s)
		return (0);
	i = 0;
	if (n < 0)
	{
		s[i++] = '-';
		m *= -1;
	}
	while (operator > 0)
	{
		s[i++] = m / operator + 48;
		m %= operator;
		operator /= 10;
	}
	s[i] = '\0';
	return (s);
}
