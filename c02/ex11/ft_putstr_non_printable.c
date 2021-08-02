/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:55:27 by zihirri           #+#    #+#             */
/*   Updated: 2021/06/29 13:58:56 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char x)
{
	char	*c;

	c = "0123456789abcdef";
	ft_putchar(c[x / 16]);
	ft_putchar(c[x % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str < ' ' || *str == 127)
		{
			ft_putchar('\\');
			ft_puthex(*str);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}
/* int main()
{
	char	test[]="Coucou\ntu vas bien ?";
	ft_putstr_non_printable(test);
} */
