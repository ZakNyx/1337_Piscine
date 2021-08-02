/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 13:15:36 by zihirri           #+#    #+#             */
/*   Updated: 2021/06/29 16:03:43 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dst[50];
	char	src[] = "simo";

	ft_strcpy(dst, src);
	printf("%s", dst);
}*/
