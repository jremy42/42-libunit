# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 10:12:53 by ngiroux           #+#    #+#              #
#    Updated: 2022/01/09 15:59:13 by ngiroux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define
DEF			= FT_TESTED='"1"'\
			FT00_TEST='"1111"' 
DEFS		= $(addprefix -D, $(DEF))

# Names 
NAME		= tester
LIB_NAME	= libunit.a
FILES		= 00_strlen/00_launcher.c 00_strlen/01_test_OK.c 00_strlen/02_test_KO.c \
			00_strlen/03_test_sigsev.c 00_strlen/04_test_bus_error.c \
			00_strlen/ft_strlen.c \
			00_strlen/ft_itoa.c\
			main.c

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
LIB_CC	= -L$(LIB_PATH) -lunit
INCS	= -I $(LIB_INCS_PATH) -I $(INCS_PATH) -I $(INCS_PATH)

# Create obj and dir
$(OBJS_PATH)%.o: %.c
			mkdir -p $(dir $@)
			$(CC) $(CFLAGS) $(INCS) -c $< -o $@  

# Compiling command
all:		${NAME}

${NAME}:	${OBJS}
			make -C $(LIB_PATH) 
			$(CC) $(CFLAGS) $(OBJS) $(LIB_CC) -o $(NAME)

test:		${NAME}
			./${NAME} || true
# Other rules
clean:
			rm -rf ${OBJS_PATH}
			make -C $(LIB_PATH) clean

fclean:		clean
			rm -rf ${NAME}
			rm -rf ${LIB_NAME}
			make -C $(LIB_PATH) fclean

re:			fclean all

.PHONY:		all clean fclean re test
