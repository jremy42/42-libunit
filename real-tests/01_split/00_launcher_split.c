/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_split.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:04:29 by ngiroux           #+#    #+#             */
/*   Updated: 2022/01/09 18:46:16 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "real_unit.h"

int	ft01_launcher(t_score *score)
{
	t_utest	*testlist;
	int		res;

	testlist = NULL;
	if (FT01_TEST[0] == '1')
		__loader(&testlist, "SPLIT", "Basic_Test", &__basic_split);
	if (FT01_TEST[1] == '1')
		__loader(&testlist, "SPLIT", "NULL_Test", &__basic2_split);
	if (FT01_TEST[2] == '1')
		__loader(&testlist, "SPLIT", "UNICODE_test", &__null_split);
	res = __launcher(testlist, score);
	return (res);
}
