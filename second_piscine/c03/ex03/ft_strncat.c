/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:34:13 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/10 18:38:42 by alsilvan         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				length;
	unsigned int	x;

	length = str_length(dest);
	x = 0;
	while (src[x] != '\0')
	{
		if (x == nb)
			break ;
		dest[length] = src[x];
		length++;
		x++;
	}
	dest[length] = '\0';
	return (dest);
}
