/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 20:43:36 by zihirri           #+#    #+#             */
/*   Updated: 2021/07/12 14:54:12 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	len;

	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	len = max - min;
	tab = (int *) malloc (len * sizeof(int));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
int main(void)
{
	int a = -10;
	int b = 10;
	int *c = 0;
	int d = 0;

	c =  ft_range(a,b);
	while (d < b - a)
	{
		printf("%d ", c[d]);
		d++;
	}
	return (0);
}
*/
