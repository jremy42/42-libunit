/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_NULLft00.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:08:10 by jremy             #+#    #+#             */
/*   Updated: 2022/01/09 18:05:38 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_unit.h"

int	__null_test(void)
{
	static char	*str = NULL;

	if (ft_strlen(str) == strlen(str))
		return (0);
	else
		return (-1);
}
