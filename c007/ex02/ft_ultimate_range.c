/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 13:50:12 by zihirri           #+#    #+#             */
/*   Updated: 2021/07/12 14:33:54 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	c;
	int	*size;

	c = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = (*range = malloc(sizeof(int) * (max - min)));
	if (size == NULL)
		return (-1);
	while (min < max)
	{
		size[c] = min;
		min++;
		c++;
	}
	return (c);
}
/*
int main(void)
{
	int	*range;
	int	size;
	int i;
	size = ft_ultimate_range(&range, 0,30);
	printf("Size is %d \n", size);
	i = 0;
	while(i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	return (0);
}
*/
