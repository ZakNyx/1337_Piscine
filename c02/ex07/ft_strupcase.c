/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 09:49:46 by zihirri           #+#    #+#             */
/*   Updated: 2021/06/29 09:44:11 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include<stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*int main(void)
{
	char test[] = "tessst";
	ft_strupcase(test);
	printf("%s", test);
}*/
