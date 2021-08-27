/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 21:59:10 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/07 16:10:15 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (i == n)
			break ;
		if (s1[i] > s2[i])
		{
			result = 1;
			break ;
		}
		if (s1[i] < s2[i])
		{
			result = -1;
			break ;
		}
		i++;
	}
	return (result);
}
