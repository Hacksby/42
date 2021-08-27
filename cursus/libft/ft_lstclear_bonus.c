/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 11:32:53 by alsilvan          #+#    #+#             */
/*   Updated: 2021/08/26 11:32:54 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*aux_next;

	if (*lst)
	{
		aux = (*lst);
		while (aux)
		{
			aux_next = aux->next;
			del(aux->content);
			free(aux);
			aux = aux_next;
		}
		*lst = 0;
	}
}
