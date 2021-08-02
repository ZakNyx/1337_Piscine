/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 11:29:57 by zihirri           #+#    #+#             */
/*   Updated: 2021/07/03 11:30:05 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	c_dest;
	int	c_src;

	c_dest = 0;
	c_src = 0;
	while (dest[c_dest] != '\0')
	{
		c_dest++;
	}
	while (src[c_src] != '\0')
	{
		dest[c_dest++] = src[c_src++];
	}
	dest[c_dest] = '\0';
	return (dest);
}
/*int main(void)
{
char a[50] = "Test ";
	char b[50] = "BOOM123";
	ft_strcat(a,b);
	printf("%s", a);

}*/
