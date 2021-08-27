/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsilvan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:33:31 by alsilvan          #+#    #+#             */
/*   Updated: 2021/07/13 16:38:46 by alsilvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		x;

	i = 1;
	argc -= 1;
	while (argc > 0)
	{
		x = 0;
		while (argv[argc][x] != '\0')
		{
			ft_putchar(argv[argc][x]);
			x++;
		}
		ft_putchar('\n');
		argc--;
	}
}
