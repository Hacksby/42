/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 19:19:13 by alsilvan          #+#    #+#             */
/*   Updated: 2021/08/02 20:20:51 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_1;
	size_t	len_2;

	len_1 = ft_strlen(dst);
	len_2 = ft_strlen(src);
	i = 0;
	if (dstsize <= len_1)
		len_2 += dstsize;
	else
		len_2 += len_1;
	while (src[i] != '\0' && len_1 + 1 < dstsize)
	{
		dst[len_1] = src[i];
		len_1++;
		i++;
	}
	dst[len_1] = '\0';
	return (len_2);
}
