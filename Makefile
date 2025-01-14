# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thodavid <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/10 12:47:10 by thodavid          #+#    #+#              #
#    Updated: 2025/01/14 14:27:35 by thodavid         ###   ########.fr        #
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
			ft_putstr\
			ft_putnbr\
			ft_unsputnbr\
			ft_puthexa\


OBJS		= ft_printf.o ft_putchar.o ft_putstr.o ft_putnbr.o ft_unsputnbr.o ft_puthexa.o

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
