/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 17:43:39 by zihirri           #+#    #+#             */
/*   Updated: 2021/06/26 17:43:42 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_column(int s, char l, char m, char r)
{
	if (s-- >= 1)
	{
		ft_putchar(l);
		while (s-- >= 2)
		{
			ft_putchar(m);
		}
		if (s == 0)
		{
			ft_putchar(r);
		}
		ft_putchar('\n');
	}
}

void	ft_print_line(int x, int y, char z)
{
	int	i;

	while (y-- > 2)
	{
		ft_putchar(z);
		i = 2;
		while (x > i++)
		{
			ft_putchar(' ');
		}
		ft_putchar(z);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (y >= 1)
	{
		ft_print_column(x, '/', '*', '\\');
	}
	ft_print_line(x, y, '*');
	if (y >= 2)
	{
		ft_print_column(x, '\\', '*', '/');
	}
}
