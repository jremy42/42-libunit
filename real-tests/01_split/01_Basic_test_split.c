/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_Basicsplit.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:08:10 by jremy             #+#    #+#             */
/*   Updated: 2022/01/09 18:09:36 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_unit.h"

int	__basic_split(void)
{
	static char	*str = "ceci est test";
	char		**ret;

	ret = ft_split(str, ' ');
	if (strcmp(ret[0], "ceci") != 0)
	{
		ft_free_tab(ret);
		return (-1);
	}
	if (strcmp(ret[1], "est") != 0)
	{
		ft_free_tab(ret);
		return (-1);
	}
	if (strcmp(ret[2], "test") != 0)
	{
		ft_free_tab(ret);
		return (-1);
	}
	else
	{
		ft_free_tab(ret);
		return (0);
	}
}
