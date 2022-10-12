/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:32:31 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/24 14:06:12 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
//////////////////////
# include<unistd.h>
# include<stdlib.h>
# include<stdarg.h>
//////////////////////
int		ft_printf(const char *s, ...);
int		ft_printstr(char *str);
void	ft_printhex(unsigned int h, int *c);
void	ft_printhexu(unsigned int h, int *c);
int		ft_printnbr(int nb);
int		ft_printun(unsigned int nb);
void	ft_putchar(char c);
void	ft_printad(unsigned long long n, int *c);
int		ft_strlen(const char *s);
int		ft_len(long a);
#endif
