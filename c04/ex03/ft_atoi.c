/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:10:53 by zihirri           #+#    #+#             */
/*   Updated: 2021/07/05 10:12:17 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	c;
	int	i;
	int	result;

	c = 0;
	i = 1;
	result = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || (str[c] == ' '))
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			i *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		result = (str[c] - '0') + (result * 10);
		c++;
	}
	return (result * i);
}
/*
#include <stdio.h>
int main (void) {
	char a[] = "		---+---+1234ab567";
	printf("%d" , ft_atoi(a));
}*/
