/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:26:09 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/06 15:48:09 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\0')
			break ;
		if (!(str[i] > 47 && str[i] < 58))
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
