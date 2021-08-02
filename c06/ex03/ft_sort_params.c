/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 18:34:09 by zihirri           #+#    #+#             */
/*   Updated: 2021/07/10 12:43:07 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print_param(int ac, char **av )
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x++ < (ac - 1))
	{
		while (av[x][y] != '\0')
		{
			ft_putchar(av[x][y]);
			y++;
		}
		y = 0;
		ft_putchar('\n');
	}
}

int	main(int ac, char **av)
{
	int	x;

	x = 1;
	while (x < (ac - 1))
	{
		if (x + 1 < ac && ft_strcmp(av[x + 1], av[x]) < 0)
		{
			av[ac + 1] = av[x];
			av[x] = av[x + 1];
			av[x + 1] = av[ac + 1];
			x = 0;
		}
		x++;
	}
	ft_print_param(ac, av);
	return (0);
}
