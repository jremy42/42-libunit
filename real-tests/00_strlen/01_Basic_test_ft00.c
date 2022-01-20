/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_Basicft00.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:08:10 by jremy             #+#    #+#             */
/*   Updated: 2022/01/09 18:03:00 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_unit.h"

int	__basic_test(void)
{
	static char	*str = "ceci est un test";

	if (ft_strlen(str) == strlen(str))
		return (0);
	else
		return (-1);
}
