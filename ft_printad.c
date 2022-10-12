/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printad.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:09:33 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/23 22:13:22 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	ft_printhexad(unsigned long long h, int *c)
{
	if (h >= 16)
		ft_printhexad((h / 16), c);
	if ((h % 16) >= 10)
	{
		ft_putchar((h % 16) + 87);
		(*c)++;
	}
	else
	{
		ft_putchar((h % 16) + 48);
		(*c)++;
	}
}

void	ft_printad(unsigned long long n, int *c)
{
	write(1, "0x", 2);
	(*c) += 2;
	ft_printhexad(n, c);
}
