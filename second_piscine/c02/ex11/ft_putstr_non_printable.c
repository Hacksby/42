/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:24:47 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/07 10:52:22 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	char	x;

	if (c < 10)
		x = '0' + c;
	else
		x = 'a' - 10 + c;
	write (1, &x, 1);
}

void	ft_hex(unsigned char c)
{
	write (1, "\\", 1);
	ft_putchar(c / 16);
	ft_putchar(c % 16);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	aux_u_char;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			if (str[i] < 0)
			{
				aux_u_char = str[i] + 256;
				ft_hex(aux_u_char);
			}
			else
				ft_hex(str[i]);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
}
