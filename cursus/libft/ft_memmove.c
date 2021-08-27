/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 15:39:19 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/31 18:42:24 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_aux;
	const char	*src_aux;
	size_t		i;

	if (!dst && !src)
		return (dst);
	dst_aux = (char *) dst;
	src_aux = (const char *) src;
	i = -1;
	if (dst_aux < src_aux)
		while (++i < len)
			*(dst_aux++) = *(src_aux++);
	else
	{
		dst_aux = dst_aux + (len - 1);
		src_aux = src_aux + (len - 1);
		while (++i < len)
			*(dst_aux--) = *(src_aux--);
	}
	return (dst);
}
