/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 18:45:29 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/10 18:17:31 by alsilvan         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length_1;
	unsigned int	length_2;

	length_1 = str_length(dest);
	length_2 = str_length(src);
	i = 0;
	if (size <= length_1)
		length_2 += size;
	else
		length_2 += length_1;
	while (src[i] != '\0' && length_1 + 1 < size)
	{
		dest[length_1] = src[i];
		length_1++;
		i++;
	}
	dest[length_1] = '\0';
	return (length_2);
}
