/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 18:43:51 by alsilvan          #+#    #+#             */
/*   Updated: 2021/08/26 11:50:46 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = -1;
	if (dstsize > 0 && src != 0 && dst != 0)
	{
		while (src[++i] && i < (dstsize - 1))
			dst[i] = src[i];
		dst[i] = '\0';
	}
	return (len);
}
