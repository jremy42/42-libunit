/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:04:29 by ngiroux           #+#    #+#             */
/*   Updated: 2022/01/09 15:31:34 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"

int	ft00_launcher(t_score *score)
{
	t_utest	*testlist;
	int		res;

	testlist = NULL;
	if (FT00_TEST[0] == '1')
		__loader(&testlist, "TEST", "OK_Test", &__test_ok);
	if (FT00_TEST[1] == '1')
		__loader(&testlist, "TEST", "KO_Test", &__test_ko);
	if (FT00_TEST[2] == '1')
		__loader(&testlist, "TEST", "SEG_Test", &__test_sigsev);
	if (FT00_TEST[3] == '1')
		__loader(&testlist, "TEST", "BUS_Test", &__test_bus);
	res = __launcher(testlist, score);
	return (res);
}
