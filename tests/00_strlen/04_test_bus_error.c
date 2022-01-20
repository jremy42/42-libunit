/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_test_bus_error.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:31:30 by ngiroux           #+#    #+#             */
/*   Updated: 2022/01/09 15:56:07 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

#if defined(__GNUC__)
# if defined(__i386__)
#  define ARCH 0
# elif defined(__x86_64__) 
#  define ARCH 1
# endif
#endif

int	__test_bus(void)
{
	int			*iptr;
	char		*cptr;
	static char	*mac = "coucou";

	if (ARCH == 0)
		__asm__("pushf\norl $0x40000,(%esp)\npopf");
	else
		__asm__("pushf\norl $0x40000,(%rsp)\npopf");
	cptr = malloc(sizeof(int) + 1);
	iptr = (int *)++cptr;
	*iptr = 42;
	mac[1] = '1';
	return (0);
}
