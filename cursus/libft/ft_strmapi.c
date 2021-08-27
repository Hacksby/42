/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:04:10 by alsilvan          #+#    #+#             */
/*   Updated: 2021/08/17 14:04:12 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	i;

	if (!s)
		return (0);
	s2 = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (!s2)
		return (0);
	i = -1;
	while (s[++i])
		s2[i] = f(i, s[i]);
	s2[i] = '\0';
	return (s2);
}
