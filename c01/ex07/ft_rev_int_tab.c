/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:22:17 by zihirri           #+#    #+#             */
/*   Updated: 2021/06/27 10:26:14 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void 	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	if (size < 2)
		return ;
	while (i < size--)
	{
		ft_swap(&tab[i++], &tab[size]);
	}
}
