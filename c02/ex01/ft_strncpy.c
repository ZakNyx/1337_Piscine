 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 14:52:28 by zihirri           #+#    #+#             */
/*   Updated: 2021/06/29 16:04:45 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// #include<stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
/*
int	main(void)
{
	char dest[50];
	char src[] = "abcdefjhierjgoier";
printf("%s", ft_strncpy(dest, src, 4));
}*/
