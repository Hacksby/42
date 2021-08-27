/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 22:13:15 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/07 16:37:58 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_length(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char 	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		length_1;
	int		length_2;

	length_1 = str_length(src);
	length_2 = str_length(dest);
	i = 0;
	while (i < length_1)
	{
		dest[length_2] = src[i];
		length_2++;
		i++;
	}
	dest[length_2] = '\0';
	return (dest);
}
