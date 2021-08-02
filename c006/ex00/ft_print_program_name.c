/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:37:14 by zihirri           #+#    #+#             */
/*   Updated: 2021/07/10 10:11:58 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac >= 1)
	{
		while (av[0][i] != '\0')
		{
			ft_putchar(av[0][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
