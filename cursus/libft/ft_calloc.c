/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:03:21 by alsilvan          #+#    #+#             */
/*   Updated: 2021/08/04 20:20:24 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocate;

	allocate = (void *)malloc(count * size);
	if (!allocate)
		return (NULL);
	ft_bzero(allocate, count * size);
	return (allocate);
}
