/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 09:43:51 by zihirri           #+#    #+#             */
/*   Updated: 2021/06/29 13:59:31 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include<stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main (void)
{
	char c[] = "123456";
	printf("%d", ft_str_is_printable(c));
}*/
