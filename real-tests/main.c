/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:01:04 by ngiroux           #+#    #+#             */
/*   Updated: 2022/01/09 17:51:16 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_unit.h"

int	main(void)
{
	t_score	score;

	score.ok = 0;
	score.total = 0;
	if (FT_TESTED[0] == '1')
		ft00_launcher(&score);
	if (FT_TESTED[1] == '1')
		ft01_launcher(&score);
	if (FT_TESTED[2] == '1')
		ft02_launcher(&score);
	__print_global_summary(score.ok, score.total);
	if (score.ok == score.total)
		return (0);
	else
		return (-1);
}
