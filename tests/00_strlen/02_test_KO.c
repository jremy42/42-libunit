/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_test_KO.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:15:37 by ngiroux           #+#    #+#             */
/*   Updated: 2022/01/09 15:20:42 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	__test_ko(void)
{
	if (ft_strlen("hello") == 7)
		return (0);
	else
	{
		__log_test("strlen hello", ft_itoa(strlen("hello")), ft_itoa(ft_strlen("hello")));
		return (-1);
	}
}