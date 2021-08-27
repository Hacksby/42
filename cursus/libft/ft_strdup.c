/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 20:20:54 by alsilvan          #+#    #+#             */
/*   Updated: 2021/08/04 21:04:47 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*allocate;
	size_t		i;

	allocate = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!allocate)
		return (NULL);
	i = -1;
	while (++i <= ft_strlen(s1))
		allocate[i] = s1[i];
	return (allocate);
}
