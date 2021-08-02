/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:59:11 by zihirri           #+#    #+#             */
/*   Updated: 2021/06/26 12:03:13 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	x;
	char	y;

	x = 0;
	y = 1;
	while (x < 99)
	{
		ft_putchar(x / 10 + '0');
		ft_putchar(x % 10 + '0');
		ft_putchar(' ');
		ft_putchar(y / 10 + '0');
		ft_putchar(y % 10 + '0');
		if (x < 98)
			write(1, ", ", 2);
		if (++y > 99)
			y = ++x + 1;
	}
}
