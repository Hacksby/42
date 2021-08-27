/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 20:00:42 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/05 18:12:42 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux[10000];
	int	position;
	int	tab_index;
	int	aux_index;
	int	min_number;

	aux_index = 0;
	while (aux_index < size)
	{
		min_number = 2147483647;
		tab_index = 0;
		while (tab_index < size)
		{
			if (min_number > tab[tab_index])
			{
				min_number = tab[tab_index];
				position = tab_index;
			}
			tab_index++;
		}
		tab[position] = 2147483647;
		aux[aux_index] = min_number;
		aux_index++;
	}
}
