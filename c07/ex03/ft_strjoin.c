/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:27:12 by zihirri           #+#    #+#             */
/*   Updated: 2021/07/12 14:56:00 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_lenght(char **strs, int size, char *sep)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = 0;
	while (i < size)
	{
		lenght = lenght + ft_strlen(strs[i]);
		i++;
	}
	lenght = lenght + (size - 1) * ft_strlen(sep) + 1 ;
	return (lenght);
}

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	str = malloc(sizeof(char) * ft_lenght(strs, size, sep));
	if (str == 0)
		return (NULL);
	*str = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
int main (void)
{
	char	*c;
	int 	i;
	char	*t[] = {"allo", "Al/lO0", "@OPOP", "gOULag", "Hitler"};
	char	*sep = "__Zak-Ihir#__";
	c = ft_strjoin(5,t,sep);
	i = 0;
	while (c[i] != '\0')
	{
		printf("%c", c[i]);
		i++;
	}
}
*/
