/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:28:41 by zihirri           #+#    #+#             */
/*   Updated: 2021/07/04 12:24:53 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char a [] = "";
	printf("%d" ,ft_str_is_alpha(a));
}

