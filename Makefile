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
		  print.c \

################################################################################
## REGLES

all: $(NAME)

$(NAME): ft_printf.o print.o
	$(CC) $(CFLAGS) -o $(NAME) ft_printf.o print.o

ft_printf.o: ft_printf.c ft_printf.h
	$(CC) $(CFLAGS) ft_printf.c

print.o: print.c ft_printf.h print.h
	$(CC) $(CFLAGS) print.c

clean:
	rm $(NAME) ft_printf.o print.o

fclean:
	rm -f $(NAME)
