/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:52:05 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/24 14:02:37 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>

static void	ft_switch(const char *s, va_list arg_ptr, int *c)
{
	if (*s == '%')
	{
		ft_putchar('%');
		(*c)++;
	}
	else if (*s == 'c')
	{
		ft_putchar((char)va_arg(arg_ptr, int));
		(*c)++;
	}
	else if (*s == 'd' || *s == 'i')
		(*c) += ft_printnbr(va_arg(arg_ptr, int));
	else if (*s == 's')
		(*c) += ft_printstr(va_arg(arg_ptr, char *));
	else if (*s == 'u')
		(*c) += ft_printun(va_arg(arg_ptr, unsigned int));
	else if (*s == 'x')
		ft_printhex(va_arg(arg_ptr, unsigned int), c);
	else if (*s == 'X')
		ft_printhexu(va_arg(arg_ptr, unsigned int), c);
	else if (*s == 'p')
		ft_printad(va_arg(arg_ptr, unsigned long long), c);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg_ptr;
	int		i;
	int		c;

	i = 0;
	c = 0;
	va_start(arg_ptr, s);
	while (s[i])
	{
		if (s[i] != '%')
		{
			ft_putchar(s[i]);
			c++;
		}
		else
		{
			i++;
			ft_switch(&s[i], arg_ptr, &c);
		}
		if (s[i])
			i++;
	}
	va_end(arg_ptr);
	return (c);
}
