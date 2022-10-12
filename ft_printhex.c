/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:13:54 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/23 22:16:00 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhex(unsigned int h,	int *c)
{
	unsigned int	mod;

	mod = h % 16;
	if (h >= 16)
		ft_printhex(h / 16, c);
	if (mod >= 10)
	{
		ft_putchar(mod + 87);
		(*c)++;
	}
	else
	{
		ft_putchar(mod + 48);
		(*c)++;
	}
}
