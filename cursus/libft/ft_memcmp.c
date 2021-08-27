/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:14:01 by alsilvan          #+#    #+#             */
/*   Updated: 2021/08/03 20:27:57 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*aux_s1;
	const unsigned char	*aux_s2;

	aux_s1 = s1;
	aux_s2 = s2;
	while (n-- > 0)
	{
		if (*aux_s1 != *aux_s2)
			return ((int)(*aux_s1 - *aux_s2));
		aux_s1++;
		aux_s2++;
	}
	return (0);
}
