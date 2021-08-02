/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 17:48:01 by zihirri           #+#    #+#             */
/*   Updated: 2021/06/26 11:59:50 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0' - 1;
	while (first++ < '7')
	{
		second = first;
		while (second++ < '8')
		{
			third = second;
			while (third++ < '9')
			{
				ft_putchar(first);
				ft_putchar(second);
				ft_putchar(third);
				if (first != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
