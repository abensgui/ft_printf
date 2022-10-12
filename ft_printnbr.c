/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:22:15 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/23 22:23:57 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int nb)
{
	int	i;

	i = ft_len(nb);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_printnbr(nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_printnbr(nb / 10);
		}
		ft_putchar((nb % 10) + '0');
	}
	return (i);
}
