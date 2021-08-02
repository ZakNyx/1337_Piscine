/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:56:31 by zihirri           #+#    #+#             */
/*   Updated: 2021/07/10 10:05:40 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	while (x < ac)
	{
		while (av[x][y] != '\0')
		{
			ft_putchar(av[x][y]);
			y++;
		}
		y = 0;
		ft_putchar('\n');
		x++;
	}
	return (0);
}
