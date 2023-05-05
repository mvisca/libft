# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 19:18:12 by mvisca-g          #+#    #+#              #
#    Updated: 2023/05/05 15:05:48 by mvisca-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-c -Wall -Wextra -Werror -I.

NAME=libft.a

SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)

AR=ar rcs
RM=rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creating library"
	$(AR) $@ $(OBJS)

%.o: %.c
	@echo "Compiling"
	$(CC) $(CFLAGS) $< -o $@

clean:
	@echo "Delete *.o"
	$(RM) $(OBJS)

fclean: clean
	@echo "Delete program"
	$(RM) $(NAME)

re: fclean all
	@echo "Reseting"

.PHONY: all clean fclean re

# Para incluir bonus poner la regla "bonus"
# Agrega las funciones que estan prohibidas en la parte mandatoria del subject ( _bonus.{c/h} )
