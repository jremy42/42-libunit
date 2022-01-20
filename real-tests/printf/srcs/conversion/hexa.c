/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:48:25 by ngiroux           #+#    #+#             */
/*   Updated: 2022/01/09 19:06:53 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa_count(char c, unsigned int n, int count)
{
	char	*hexa;

	if (c == 'x')
		hexa = HEXA_LOWER;
	if (c == 'X')
		hexa = HEXA_UPPER;
	if (n >= 16)
	{
		count = ft_putnbr_hexa_count(c, n / 16, count);
		count = ft_putnbr_hexa_count(c, n % 16, count);
	}
	else
	{
		count += ft_putchar_count(*(hexa + n));
	}
	return (count);
}

int	ft_puthexa_count(size_t n)
{
	int		i;
	int		count;
	char	*str;

	if ((void *)n == NULL)
		return (ft_putstr_count("(nil)"));
	str = malloc(sizeof(char) * 17);
	if (!str)
		return (0);
	i = 0;
	count = 0;
	while (n > 0)
	{
		str[i] = HEXA_LOWER[n % 16];
		n = n / 16;
		i++;
		count++;
	}
	str[i] = 0;
	write(1, "0x", 2);
	while (--i >= 0)
		write(1, &str[i], 1);
	free(str);
	return (count + 2);
}
