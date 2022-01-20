/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_NULLsplit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:08:10 by jremy             #+#    #+#             */
/*   Updated: 2022/01/09 18:03:00 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_unit.h"

int	__null_split(void)
{
	char	*str;
	char	**ret;

	str = NULL;
	ret = ft_split(str, ' ');
	if (ret == NULL)
		return (0);
	else
		return (-1);
}
