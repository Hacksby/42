/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 11:29:03 by alsilvan          #+#    #+#             */
/*   Updated: 2021/08/26 11:29:05 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	aux;

	aux = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		aux = (unsigned int)(n * -1);
	}
	else
		aux = (unsigned int) n;
	if (aux > 9)
		ft_putnbr_fd(aux / 10, fd);
	ft_putchar_fd((char)(aux % 10 + 48), fd);
}
