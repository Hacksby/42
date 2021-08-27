/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 17:30:09 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/08 14:07:00 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	copy_index;
	unsigned int	source_size_index;

	copy_index = 0;
	source_size_index = 0;
	while (src[source_size_index] != '\0')
	{
		if (size > 0 && copy_index < (size - 1))
		{
			dest[copy_index] = src[copy_index];
			copy_index++;
		}
		source_size_index++;
	}
	if (size > 0)
		dest[copy_index] = '\0';
	return (source_size_index);
}
