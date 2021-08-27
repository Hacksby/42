/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 19:12:48 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/31 15:39:11 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_aux;
	const char	*src_aux;

	if (!dst && !src)
		return (dst);
	dst_aux = (char *) dst;
	src_aux = (const char *) src;
	while (n-- > 0)
		*(dst_aux++) = *(src_aux++);
	return (dst);
}
