/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_unit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:06:54 by jremy             #+#    #+#             */
/*   Updated: 2022/01/09 18:55:20 by ngiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL_UNIT_H
# define REAL_UNIT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <libunit.h>
# include <string.h>
# include <stddef.h>
# include "ft_printf.h"
# include <limits.h>

# define BUFFER_SIZE 1000

// Typedef
typedef struct s_pipe
{
	int		stdout_cpy;
	int		stdin_cpy;
	int		pipe_fds[2];
}	t_pipe;

typedef struct s_ret
{
	int		ret1;
	int		ret2;
}	t_ret;

typedef struct s_print
{
	int				d;
	char			c;
	char			*str;
	void			*p;
	unsigned int	u;
}	t_print;

// 🚀 _launcher 
int		ft00_launcher(t_score *score);
int		ft01_launcher(t_score *score);
int		ft02_launcher(t_score *score);

// functions tested
size_t	ft_strlen(char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);

// ft00_test strlen
int		__basic_test(void);
int		__null_test(void);
int		__unicode_test(void);

// ft01 test split
int		__basic_split(void);
int		__basic2_split(void);
int		__null_split(void);
void	ft_free_tab(char **tab);

// ft03 test printf
int		__basic_printf(void);
int		__basic2_printf(void);
int		__int_printf(void);
int		__int_max_printf(void);
int		__int_min_printf(void);
int		__int_of_printf(void);
int		__char_printf(void);
int		__char_noprint_printf(void);
int		__str_basic_printf(void);
int		__str_null_printf(void);
int		__ptr_null_printf(void);
int		__ptr_basic_printf(void);
int		__hexa_printf(void);
int		__hexa_max_printf(void);
int		__hexa_min_printf(void);

// stdin stdout utils
int		__init_get(t_pipe *std);
void	__read_std(char *buff, t_pipe *std);
void	__close_std(t_pipe *std);

#endif