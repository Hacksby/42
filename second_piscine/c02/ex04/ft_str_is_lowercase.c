/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:48:36 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/06 15:53:39 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\0')
			break ;
		if (!(str[i] > 96 && str[i] < 123))
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
