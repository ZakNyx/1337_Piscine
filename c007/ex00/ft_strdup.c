/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 16:32:45 by zihirri           #+#    #+#             */
/*   Updated: 2021/07/12 14:53:40 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
#include <stdlib.h>
char	*ft_strdup(char *src)
{
	char	*s2;
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (src[n] != '\0')
		n++;
	s2 = malloc(sizeof(*src) * (n + 1));
	while (src[i] != '\0')
	{
		s2[i] = src[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int	main(void)
{
	char c[]= "re";
	char *n;
	n = ft_strdup(c);
	printf("%s", n);
}
*/
