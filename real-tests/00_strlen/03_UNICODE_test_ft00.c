/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_UNICODEft00.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:08:10 by jremy             #+#    #+#             */
/*   Updated: 2022/01/09 18:03:00 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_unit.h"

int	__unicode_test(void)
{
	static char	*str = "בבבבבבב|̲̅̅●̲̅̅|̲̅̅חחחחח";

	if (ft_strlen(str) == strlen(str))
		return (0);
	else
		return (-1);
}