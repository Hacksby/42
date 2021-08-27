/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:02:47 by alsilvan          #+#    #+#             */
/*   Updated: 2021/08/17 14:02:49 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*allocate;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		len = 0;
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	allocate = (char *)malloc(sizeof(*s) * len + 1);
	if (!allocate)
		return (0);
	i = -1;
	j = 0;
	while (s[++i])
		if (i >= start && j < len)
			allocate[j++] = s[i];
	allocate[j] = '\0';
	return (allocate);
}
