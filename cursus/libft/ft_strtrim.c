/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:03:13 by alsilvan          #+#    #+#             */
/*   Updated: 2021/08/17 14:03:16 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	s_start;
	size_t	s_end;

	s2 = 0;
	if (!s1)
		return (0);
	s_start = 0;
	s_end = ft_strlen(s1);
	while (s1[s_start] && ft_strchr(set, s1[s_start]))
		s_start++;
	while (s1[s_end - 1] && ft_strchr(set, s1[s_end - 1])
		&& s_end > s_start)
		s_end--;
	s2 = (char *)malloc(sizeof(*s1) * (s_end - s_start + 1));
	if (!s2)
		return (0);
	ft_strlcpy(s2, &s1[s_start], (s_end - s_start + 1));
	return (s2);
}
