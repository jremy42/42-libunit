/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:55:08 by ngiroux           #+#    #+#             */
/*   Updated: 2021/12/15 14:15:27 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count = count + ft_checkflag(*str, args);
		}
		else
			count += ft_putchar_count(*str);
		str++;
	}
	va_end(args);
	return (count);
}

int	ft_checkflag(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar_count(va_arg(args, int));
	if (c == 's')
		count = ft_putstr_count(va_arg(args, char *));
	if (c == 'p')
		count = ft_puthexa_count(va_arg(args, size_t));
	if (c == 'd' || c == 'i')
		count = ft_putnbr_count(va_arg(args, int), count);
	if (c == 'u')
		count = ft_putnbr_unsigned_count(va_arg(args, int), count);
	if (c == 'x' || c == 'X')
		count = ft_putnbr_hexa_count(c, va_arg(args, int), count);
	if (c == '%')
		count = ft_putchar_count('%');
	return (count);
}
