/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_printf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:53:13 by ngiroux           #+#    #+#             */
/*   Updated: 2022/01/09 18:56:55 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "real_unit.h"

int	ft02_launcher(t_score *score)
{
	t_utest	*testlist;
	int		res;

	testlist = NULL;
	if (FT02_TEST[0] == '1')
		__loader(&testlist, "PRINTF", "Basic_Test", &__basic_printf);
	if (FT02_TEST[1] == '1')
		__loader(&testlist, "PRINTF", "Basic_Test2", &__basic2_printf);
	if (FT00_TEST[2] == '1')
		__loader(&testlist, "PRINTF", "Int", &__int_printf);
	if (FT00_TEST[3] == '1')
		__loader(&testlist, "PRINTF", "Int_max", &__int_max_printf);
	if (FT02_TEST[4] == '1')
		__loader(&testlist, "PRINTF", "Int_min", &__int_min_printf);
	if (FT02_TEST[5] == '1')
		__loader(&testlist, "PRINTF", "Int_of", &__int_of_printf);
	if (FT02_TEST[6] == '1')
		__loader(&testlist, "PRINTF", "Char", &__char_printf);
	if (FT02_TEST[7] == '1')
		__loader(&testlist, "PRINTF", "Char_noprint", &__char_noprint_printf);
	if (FT02_TEST[8] == '1')
		__loader(&testlist, "PRINTF", "Str_basic", &__str_basic_printf);
	if (FT02_TEST[9] == '1')
		__loader(&testlist, "PRINTF", "Str_NULL", &__str_null_printf);
	if (FT02_TEST[10] == '1')
		__loader(&testlist, "PRINTF", "Ptr_NULL", &__ptr_null_printf);
	if (FT02_TEST[11] == '1')
		__loader(&testlist, "PRINTF", "Ptr_basic", &__ptr_basic_printf);
	if (FT02_TEST[12] == '1')
		__loader(&testlist, "PRINTF", "Hexa", &__hexa_printf);
	if (FT02_TEST[13] == '1')
		__loader(&testlist, "PRINTF", "Hexa_max", &__hexa_max_printf);
	if (FT02_TEST[14] == '1')
		__loader(&testlist, "PRINTF", "Hexa_min", &__hexa_min_printf);
	res = __launcher(testlist, score);
	return (res);
}
