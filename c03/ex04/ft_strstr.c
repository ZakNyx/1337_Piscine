/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:45:39 by zihirri           #+#    #+#             */
/*   Updated: 2021/07/03 17:45:56 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[n])
		{
			while (str[i + n] == to_find[n] && to_find[n] != '\0')
				n++;
			if (to_find[n] == '\0')
				return (str + i);
		}
		n = 0;
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char a[] = "zakarihoaakahosrihirri";
	char c[] = "";
	printf("%s\n", ft_strstr(a, c));
	printf("%s", strstr(a, c));
}*/
