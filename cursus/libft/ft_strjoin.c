/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:04:58 by alsilvan          #+#    #+#             */
/*   Updated: 2021/08/17 14:05:02 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*allocate;
	size_t	final_len;
	size_t	i;

	if (!s1 || !s2)
		return (0);
	final_len = ft_strlen(s1) + ft_strlen(s2);
	allocate = (char *)malloc(sizeof(char) * final_len + 1);
	if (!allocate)
		return (NULL);
	i = -1;
	while (*s1)
		allocate[++i] = *(s1++);
	while (*s2)
		allocate[++i] = *(s2++);
	allocate[++i] = '\0';
	return (allocate);
}
