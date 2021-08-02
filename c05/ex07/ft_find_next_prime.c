/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 15:29:37 by zihirri           #+#    #+#             */
/*   Updated: 2021/07/07 17:54:35 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	pr;

	pr = 2;
	if (nb == 2147483647)
		return (2147483647);
	if (nb <= 1)
		return (0);
	while (nb % pr != 0)
	{
		pr++;
	}
	if (pr == nb)
	{
		return (1);
	}
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb += 1;
	return (nb);
}
