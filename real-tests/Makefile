# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 10:12:53 by ngiroux           #+#    #+#              #
#    Updated: 2022/01/09 19:32:24 by ngiroux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define
DEF			= FT_TESTED='"111"'\
			FT00_TEST='"111"'\
			FT01_TEST='"111"'\
			FT02_TEST='"111111111111111"'
DEFS		= $(addprefix -D, $(DEF))

# Names 
NAME		= tester
LIB_NAME	= libunit.a
FILES		= 00_strlen/00_launcher_ft00.c 00_strlen/01_Basic_test_ft00.c\
			00_strlen/02_NULL_test_ft00.c 00_strlen/03_UNICODE_test_ft00.c\
			srcs/ft_strlen.c  srcs/ft_split.c srcs/ft_substr.c srcs/ft_free_tab.c\
			01_split/00_launcher_split.c\
			01_split/01_Basic_test_split.c\
			01_split/02_Basic_test_split2.c\
			01_split/03_NULL_test_split.c\
			02_printf/00_launcher_printf.c\
			02_printf/01_Basic_printf.c\
			02_printf/03_int_printf.c\
			02_printf/02_Basic2_printf.c\
			02_printf/04_int_max_printf.c\
			02_printf/05_int_min_printf.c\
			02_printf/06_int_of_printf.c\
			02_printf/07_char_printf.c\
			02_printf/08_char_noprint_printf.c\
			02_printf/09_str_basic_printf.c\
			02_printf/10_str_NULL_printf.c\
			02_printf/11_ptr_NULL_printf.c\
			02_printf/12_ptr_basic_printf.c\
			02_printf/13_hexa_printf.c\
			02_printf/14_hexa_max_printf.c\
			02_printf/15_hexa_min_printf.c\
			get_stdout.c main.c

# Paths
LIB_PATH		=../framework/
INCS_PATH		=./incs/
LIB_INCS_PATH	=$(LIB_PATH)$(INCS_PATH)
OBJS_PATH		=./objs/

# Objects
OBJS = $(addprefix $(OBJS_PATH), $(FILES:.c=.o))

# Flags + compilation
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
CFLAGS	+= $(DEFS)
LIB_CC	= -L$(LIB_PATH) -lunit -L./printf -lftprintf
INCS	= -I $(LIB_INCS_PATH) -I $(INCS_PATH) -I ./printf/incs/

# Create obj and dir
$(OBJS_PATH)%.o: %.c
			mkdir -p $(dir $@)
			$(CC) $(CFLAGS) $(INCS) -c $< -o $@  

# Compiling command
all:		${NAME}

${NAME}:	${OBJS}
			make -C $(LIB_PATH)
			make -C ./printf
			$(CC) $(CFLAGS) $(OBJS) $(LIB_CC) -o $(NAME)

test:		${NAME}
			./${NAME}

# Other rules
clean:
			rm -rf ${OBJS_PATH}
			make -C $(LIB_PATH) clean
			make -C ./printf clean

fclean:		clean
			rm -rf ${NAME}
			make -C $(LIB_PATH) fclean
			make -C ./printf fclean

re:			fclean all

.PHONY:		all clean fclean re test
