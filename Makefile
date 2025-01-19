# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thodavid <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/10 12:47:10 by thodavid          #+#    #+#              #
#    Updated: 2025/01/19 12:30:15 by thodavid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
################################################################################
## ARGUMENTS / VARIABLES

NAME		= libftprintf.a
CC		= cc
CFLAGS		= -Wall -Werror -Wextra

################################################################################
## SOURCES

SRCS		= ft_printf.c \
			ft_putchar.c\
			ft_putstr.c\
			ft_putnbr.c\
			ft_unsputnbr.c\
			ft_puthexa.c\
			ft_puthexaupp.c\
			ft_putadress.c\

OBJS		= $(SRCS:.c=.o)

################################################################################
## REGLES

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
