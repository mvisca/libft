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

# Files and directories
NAME = libft.a
NAME_BONUS = libft_bonus.a

# Compilation variables
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Linkeado
AR = ar rcs
RM = rm -fr

# Source Files
SRCS =	ft_atoi.c		ft_bzero.c		ft_calloc.c \
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

SRCS_BONUS = ft_lstadd_back_bonus.c			ft_lstadd_front_bonus.c \
			ft_lstclear_bonus.c				ft_lstdelone_bonus.c \
			ft_lstiter_bonus.c				ft_lstlast_bonus.c \
			ft_lstmap_bonus.c				ft_lstnew_bonus.c \
			ft_lstsize_bonus.c

# Objects
OBJS = $(addprefix $(OBJS_DIR), $(SRCS:.c=.o))
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

# Object Directory
OBJS_DIR = obj/

# Object 
OBJS = $(addprefix $(OBJS_DIR), $(OBJS_FILE))

# Includes
INCLUDES = libft.h

# Creates folder for objects
$(shell mkdir -p $(OBJS_DIR))

# Targets e instrucciones
all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	@echo -n "Linking... "
	$(AR) $@ $^
	@echo -n "libfh.h ready! "



$(OBJS): $(SRCS)
	@echo -n "Compiling... "
	$(CC) $(FLAGS) -c $^ -o $@


#bonus: $(NAME_BONUS)

#$(NAME_BONUS): $(OBJS) $(OBJS_BONUS)
#	@$(AR) $(NAME) $^
#	$(touch .bonus)

clean:
	@echo -n "$(RED)Delete *.o >> 🗑️$(NC)"
	@$(RM) $(OBJS) 
	@$(RM) $(OBJS_DIR) #$(OBJS_DIR)/$(OBJS_BONUS)

fclean: clean
	@echo -n "$(RED)Delete program >> 🗑️$(NC)"
	@$(RM) $(NAME) #$(NAME_BONUS)

re: fclean all
	@echo -n "Reseting"

#Protección PHONY
.PHONY: all clean fclean re
