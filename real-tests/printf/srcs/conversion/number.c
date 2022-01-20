/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:44:25 by ngiroux           #+#    #+#             */
/*   Updated: 2021/12/17 10:24:13 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_count(int n, int count)
{	
	if (n == -2147483648)
	{
		count += ft_putstr_count("-2147483648");
		return (count);
	}
	if (n < 0)
	{
		n = -n;
		count += ft_putchar_count('-');
	}
	if (n >= 10)
	{
		count = ft_putnbr_count(n / 10, count);
		count = ft_putnbr_count(n % 10, count);
	}
	else
	{
		count += ft_putchar_count(n + '0');
	}
	return (count);
}

int	ft_putnbr_unsigned_count(unsigned int n, int count)
{	
	if (n >= 10)
	{
		count = ft_putnbr_count(n / 10, count);
		count = ft_putnbr_count(n % 10, count);
	}
	else
	{
		count += ft_putchar_count(n + '0');
	}
	return (count);
}
