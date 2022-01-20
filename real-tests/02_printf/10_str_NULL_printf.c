/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_str_NULLprintf.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:08:10 by jremy             #+#    #+#             */
/*   Updated: 2022/01/09 18:40:48 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_unit.h"
#include "stdio.h"

int	__str_null_printf(void)
{
	char		mprintf[BUFFER_SIZE];
	char		tprintf[BUFFER_SIZE];
	t_pipe		std;
	t_ret		ret;
	t_print		print;

	print.str = NULL;
	ret.ret1 = 0;
	ret.ret2 = 0;
	std.stdin_cpy = -1;
	std.stdout_cpy = -1;
	__init_get(&std);
	ret.ret1 = ft_printf("coucou %s\n", print.str);
	__read_std(mprintf, &std);
	ret.ret2 = printf("coucou %s\n", print.str);
	__read_std(tprintf, &std);
	__close_std(&std);
	if (ret.ret1 != ret.ret2 || (strcmp(mprintf, tprintf) != 0))
		return (-1);
	else
		return (0);
}
