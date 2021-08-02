/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:10:41 by zihirri           #+#    #+#             */
/*   Updated: 2021/06/28 19:54:20 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include<stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char test[] = "TEST";
	printf("%d", ft_str_is_uppercase(test));
} */
