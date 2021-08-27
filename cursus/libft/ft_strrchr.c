/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 20:25:10 by alsilvan          #+#    #+#             */
/*   Updated: 2021/08/03 17:50:43 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*start;

	start = s;
	s = s + ft_strlen(s);
	while (s >= start)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (0);
}
