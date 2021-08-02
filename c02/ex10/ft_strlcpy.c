/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:34:26 by zihirri           #+#    #+#             */
/*   Updated: 2021/07/04 17:17:10 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include<stdio.h>
unsigned int	ft_strlcpy(char	*dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	c = 0;
	i = 0;
	while (src[c] != '\0')
	{
		++c;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (c);
}
/*
int main(void){
	char src[] = "0123456789";
	char dest[50];
	printf("%d \n",ft_strlcpy(dest, src, 11));
	printf("%s", dest);
}*/
