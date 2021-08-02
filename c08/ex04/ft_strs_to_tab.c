/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 21:12:58 by zihirri           #+#    #+#             */
/*   Updated: 2021/07/11 17:01:23 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

char	*ft_strdup(char *src)
{
	char	*s2;
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (src[n] != '\0')
		n++;
	s2 = malloc(sizeof(*src) * (n + 1));
	while (src[i] != '\0')
	{
		s2[i] = src[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*b_av;
	int			i;

	i = 0;
	b_av = malloc(sizeof(t_stock_str) * (ac + 1));
	if (b_av == 0)
		return (0);
	while (i < ac && av[i] != 0)
	{
		b_av[i].size = ft_strlen(av[i]);
		b_av[i].str = av[i];
		b_av[i].copy = ft_strdup(av[i]);
		i++;
	}
	b_av[i].size = 0;
	b_av[i].str = 0;
	b_av[i].copy = 0;
	return (b_av);
}
