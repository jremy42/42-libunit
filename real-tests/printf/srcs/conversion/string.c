/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:55:08 by ngiroux           #+#    #+#             */
/*   Updated: 2021/12/15 13:17:46 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_count(char *str)
{
	int	count;

	if (!str)
		return (ft_putstr_count("(null)"));
	count = 0;
	while (str[count])
		count += ft_putchar_count(str[count]);
	return (count);
}

int	ft_putchar_count(char c)
{
	return (write(1, &c, 1));
}
