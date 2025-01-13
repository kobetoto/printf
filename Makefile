# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thodavid <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/10 12:47:10 by thodavid          #+#    #+#              #
#    Updated: 2025/01/10 14:42:25 by thodavid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
## ARGUMENTS / VARIABLES

NAME		= exe
CC		= cc
CFLAGS		= -Wall -Werror -Wextra

################################################################################
## SOURCES

SRCS		= ft_printf.c \
				ft_putchar.c\
				print.c\
				ft_putstr\
				ft_putnbr\


OBJS		= ft_printf.o print.o ft_putchar.o ft_putstr.o ft_putnbr.o

################################################################################
## REGLES

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
