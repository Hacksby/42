/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 20:27:15 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/04 17:00:15 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_order_input(char *string)
{
	int	string_index;
	int	array_index;
	char	top_row[4];
	char	bot_row[4];
	char	left_column[4];
	char	right_column[4];
	
	string_index = 0;
	array_index = 0;
	while (string[string_index] != '\0')
	{
		if (string_index < 4)
			top_row[array_index] = string[string_index];
		else if (string_index < 8)
			bot_row[array_index] = string[string_index];
		else if (string_index < 12)
			left_column[array_index] = string[string_index];
		else
			right_column[array_index] = string[string_index];
		if (array_index < 4)
			array_index++;
		else
			array_index = 0;
		string_index++;
	}
}
