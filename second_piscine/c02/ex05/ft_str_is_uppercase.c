/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:56:44 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/06 16:02:58 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\0')
			break ;
		if (!(str[i] > 64 && str[i] < 91))
		{
			result = 0;
			break ;
		}
		else
			result = 1;
		i++;
	}
	return (result);
}
