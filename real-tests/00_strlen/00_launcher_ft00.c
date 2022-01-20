/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_ft00.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:04:29 by ngiroux           #+#    #+#             */
/*   Updated: 2022/01/09 18:20:56 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "real_unit.h"

int	ft00_launcher(t_score *score)
{
	t_utest	*testlist;
	int		res;

	testlist = NULL;
	if (FT00_TEST[0] == '1')
		__loader(&testlist, "STRLEN", "Basic_Test", &__basic_test);
	if (FT00_TEST[1] == '1')
		__loader(&testlist, "STRLEN", "NULL_Test", &__null_test);
	if (FT00_TEST[2] == '1')
		__loader(&testlist, "STRLEN", "UNICODE_test", &__unicode_test);
	res = __launcher(testlist, score);
	return (res);
}
