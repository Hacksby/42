/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:52:09 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/08 13:00:49 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else if (str[i - 1] < 48)
				str[i] = str[i] - 32;
			else if (str[i - 1] > 57 && str[i - 1] < 65)
				str[i] = str[i] - 32;
			else if (str[i - 1] > 90 && str[i - 1] < 97)
				str[i] = str[i] - 32;
			else if (str[i - 1] > 122)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
