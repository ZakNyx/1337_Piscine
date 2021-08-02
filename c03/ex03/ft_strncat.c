/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 16:51:19 by zihirri           #+#    #+#             */
/*   Updated: 2021/07/03 17:30:23 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	int				c_dest;

	c_dest = 0;
	c = 0;
	while (dest[c_dest] != '\0')
		c_dest++;
	while (c < nb && src[c])
	{
		dest[c_dest] = src[c];
		c_dest++;
		c++;
	}
	dest[c_dest] = '\0';
	return (dest);
}
/*
int main(void){
	char c[50] = "test ";
	char d[] = "allah";
	ft_strncat(c,d,5);
	printf("%s", c);
}*/
