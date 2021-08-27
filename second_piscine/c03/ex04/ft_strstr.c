/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:40:04 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/07 18:33:31 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	str_length(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		x;
	int		in_str;
	char	*aux_str;

	in_str = 0;
	x = 0;
	aux_str = str;
	while (*str != '\0' && in_str == 0)
	{
		if (*str == to_find[x])
		{
			x++;
			if (to_find[x] == '\0')
				in_str = 1;
		}
		else
			x = 0;
		str++;
	}
	if (str_length(to_find) == 0)
		return (aux_str);
	if (in_str == 0)
		return (NULL);
	return (str - x);
}
