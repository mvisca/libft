# **************************************************************************** #
# rm	
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvisca-g <mvisca-g@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 19:18:12 by mvisca-g          #+#    #+#              #
#    Updated: 2023/05/09 17:35:18 by mvisca-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-c -Wall -Wextra -Werror -I.

NAME=libft.a

SRCS=$(shell find . -type f -name "ft_*.c")
EXPAN=$(shell find . -type f -name "ft_lst*.c")
LIBFT=$(filter-out $(EXPAN), $(SRCS))

LIBFT_OBJS=$(LIBFT:.c=.o)
BONUS_OBJS=$(EXPAN:.c=.o)

AR=ar rcs
RM=rm -f

all: $(NAME)

$(NAME): $(LIBFT_OBJS)
	@echo "Creating library"
	$(AR) $@ $(LIBFT_OBJS)

%.o: %.c
	@echo "Compiling"
	$(CC) $(CFLAGS) $< -o $@

bonus: $(LIBFT_OBJS) $(BONUS_OBJS)
	@echo "Creating library + bonus"
	$(AR) $(NAME) $(BONUS_OBJS)

clean:
	@echo "Delete *.o"
	$(RM) $(LIBFT_OBJS)
	$(RM) $(BONUS_OBJS)
	$(RM) a.out

fclean: clean
	@echo "Delete program"
	$(RM) $(NAME)

re: fclean all
	@echo "Reseting"

.PHONY: all clean fclean re

# Para incluir bonus poner la regla "bonus"
# Agrega las funciones que estan prohibidas en la parte mandatoria del subject ( _bonus.{c/h} )
