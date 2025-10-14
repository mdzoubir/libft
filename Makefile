# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzoubir <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 12:41:49 by mzoubir           #+#    #+#              #
#    Updated: 2025/10/13 12:41:51 by mzoubir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror 

CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			ft_isprint.c ft_strlen.c ft_memset.c ft_memset.c

OFILES = $(CFILES:.c=.o)

INCLUDES = -I.

all: $(NAME)

%.o : %.c
	${CC} ${CFLAGS} ${INCLUDES} -c  $< -o $@

${NAME} : ${OFILES}
	ar rcs ${NAME} ${OFILES}

clean :
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

# This is only for testing
main : all
	cc ${CFLAGS} main.c -L. libft.a
	./a.out