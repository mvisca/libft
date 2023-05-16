# **************************************************************************** #
# rm	
#      #
#    :::  ::::::::  #
#  Makefile    :+:  :+:  :+:  #
#    +:+ +:+  +:+  #
#  By: mvisca-g <mvisca-g@student.42barcel>  +#+  +:+  +#+  #
#    +#+#+#+#+#+  +#+  #
#  Created: 2023/05/03 19:18:12 by mvisca-g  #+#  #+#  #
#  Updated: 2023/05/09 17:35:18 by mvisca-g  ###  ########.fr  #
#      #
# **************************************************************************** #

# Setup de variables con códigos de escape ANSI
BLUE = \033[94m
YELLOW = \033[93m
RED = \033[91m
GREEN = \033[92m
NC = \033[0m

# Declaración de variables de compilación
CC = 	cc
CFLAGS = -c -Wall -Wextra -Werror
NAME =	libft.a
NAME_B = .bonus
HEADER = -I libft.h
SRC_L =	ft_atoi.c		ft_bzero.c		ft_calloc.c \
		ft_isalnum.c	ft_isalpha.c	ft_isascii.c \
		ft_isdigit.c	ft_isprint.c	ft_itoa.c \
		ft_memchr.c		ft_memcmp.c		ft_memcpy.c \
		ft_memmove.c	ft_memset.c		ft_putchar_fd.c \
		ft_putendl_fd.c	ft_putnbr_fd.c	ft_putstr_fd.c \
		ft_shift.c		ft_split.c		ft_strchr.c \
		ft_strdup.c		ft_striteri.c	ft_strjoin.c \
		ft_strlcat.c	ft_strlcpy.c	ft_strlen.c \
		ft_strmapi.c	ft_strncmp.c	ft_strnstr.c \
		ft_strrchr.c	ft_strtrim.c	ft_substr.c \
		ft_tolower.c	ft_toupper.c

SRC_B =	ft_lstadd_back_bonus.c			ft_lstadd_front_bonus.c \
		ft_lstclear_bonus.c				ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c				ft_lstlast_bonus.c \
		ft_lstmap_bonus.c				ft_lstnew_bonus.c \
		ft_lstsize_bonus.c

OBJ_L = $(SRC_L:.c=.o)
OBJ_B = $(SRC_B:.c=.o)

AR = ar rc
RM = rm -f

# Targets e instrucciones
all: $(NAME)

$(NAME): $(OBJ_L)
	@echo "$(YELLOW)Creating library$(NC)"
	$(AR) $@ $(OBJ_L)
	@echo "$(GREEN)<< READY!! 😀 >>$(NC)"

%.o: %.c libft.h
	@echo "$(GREEN)Compiling$(NC)"
	$(CC) $(CFLAGS) $< -o $@ $(HEADER)

bonus: $(NAME_B)

$(NAME_B) : $(OBJ_L) $(OBJ_B)
	@echo "$(YELLOW)Creating library $(NC)+$(BLUE) bonus$(NC)"
	$(AR) $(NAME) $(OBJ_B)
	@touch $(NAME_B)

clean:
	@echo "$(RED)Delete *.o >> 🗑️$(NC)"
	$(RM) $(OBJ_L)
	$(RM) $(OBJ_B)

fclean: clean
	@echo "$(RED)Delete program >> 🗑️$(NC)"
	$(RM) $(NAME)
	$(RM) $(NAME_B)

re: fclean all
	@echo "Reseting"

#Protección PHONY
.PHONY: all clean fclean re
