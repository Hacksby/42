/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:04:20 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/08 12:08:33 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\0')
			break ;
		if (!(str[i] > 31 && str[i] < 127))
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
