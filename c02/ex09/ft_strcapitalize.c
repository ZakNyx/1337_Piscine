/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:15:49 by zihirri           #+#    #+#             */
/*   Updated: 2021/06/29 15:24:21 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start;

	i = 0;
	start = 1;
	ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (start == 1)
			{
				str[i] -= 32;
			}
			start = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			start = 0;
		else
			start = 1;
		i++;
	}
	return (str);
}
/*int main()
{
	char c[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(c));
}*/
