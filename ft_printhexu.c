/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:16:23 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/23 22:18:36 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_printhexu(unsigned int h, int *c)
{
	unsigned int	mod;

	mod = h % 16;
	if (h >= 16)
		ft_printhexu(h / 16, c);
	if (mod >= 10)
	{
		ft_putchar(mod + 55);
		(*c)++;
	}
	else
	{
		ft_putchar(mod + 48);
		(*c)++;
	}
}
