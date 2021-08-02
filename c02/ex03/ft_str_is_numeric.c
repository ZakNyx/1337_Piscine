/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 18:10:39 by zihirri           #+#    #+#             */
/*   Updated: 2021/06/28 19:39:06 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include<stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
printf("%d", ft_str_is_numeric("1q23"));
} */
