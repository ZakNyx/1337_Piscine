/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:02:25 by zihirri           #+#    #+#             */
/*   Updated: 2021/07/03 15:02:29 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n && ((s1[i] == '\0' && s2[i] != '\0')
			|| (s2[i] == '\0' && s1[i] != '\0')))
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*int main(void)
{
	char a[] = "abca";
	char b[] = "abc";

	printf("%d",ft_strncmp(a ,b , 4));
}*/
