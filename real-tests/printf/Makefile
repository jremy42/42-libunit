# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngiroux <ngiroux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 11:47:38 by ngiroux           #+#    #+#              #
#    Updated: 2022/01/09 16:39:37 by ngiroux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Names 
NAME	= libftprintf.a
FILES	= cmd/ft_printf.c \
		conversion/hexa.c conversion/number.c conversion/string.c

# Paths
SRCS_PATH =	./srcs/
INCS_PATH = ./incs/
OBJS_PATH = ./objs/

# Objects
SRCS = $(addprefix $(SRCS_PATH), $(FILES))
OBJS = $(addprefix $(OBJS_PATH), $(FILES:.c=.o))

# Flags + compilation
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc

# Create obj and dir
$(OBJS_PATH)%.o: $(SRCS_PATH)%.c
			mkdir -p $(dir $@)
			$(CC) $(CFLAGS) -c $< -o $@ -I $(INCS_PATH)

# Compiling command
all:		${NAME}

${NAME}:	${OBJS}
			ar -rcs $(NAME) $(OBJS)

# Other rules
clean:
			rm -rf ${OBJS_PATH}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
