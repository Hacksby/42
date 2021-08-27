/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 19:04:59 by alsilvan          #+#    #+#             */
/*   Updated: 2021/08/03 19:25:34 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*aux_s1;
	const unsigned char	*aux_s2;

	aux_s1 = (const unsigned char *)s1;
	aux_s2 = (const unsigned char *)s2;
	while ((*aux_s1 || *aux_s2) && n-- > 0)
	{
		if (*aux_s1 > *aux_s2)
			return (1);
		else if (*aux_s1 < *aux_s2)
			return (-1);
		aux_s1++;
		aux_s2++;
	}
	return (0);
}
