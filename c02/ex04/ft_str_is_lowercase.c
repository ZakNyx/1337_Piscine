/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 18:54:40 by zihirri           #+#    #+#             */
/*   Updated: 2021/06/28 19:45:21 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include<stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main (void)
{
	char test[] = "test";
	printf("%d", ft_str_is_lowercase(test));
}*/
