/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:50:55 by ngiroux           #+#    #+#             */
/*   Updated: 2021/12/17 10:24:16 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEXA_LOWER "0123456789abcdef"
# define HEXA_UPPER "0123456789ABCDEF"

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

//string.c
int	ft_putstr_count(char *str);
int	ft_putchar_count(char c);

//number.c
int	ft_putnbr_count(int n, int count);
int	ft_putnbr_unsigned_count(unsigned int n, int count);

//hexa.c
int	ft_putnbr_hexa_count(char c, unsigned int n, int count);
int	ft_puthexa_count(size_t n);

//printf.c
int	ft_printf(const char *str, ...);
int	ft_checkflag(char c, va_list args);

#endif
