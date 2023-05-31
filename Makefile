# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvisca <mvisca@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/31 16:04:59 by mvisca            #+#    #+#              #
#    Updated: 2023/05/31 16:43:50 by mvisca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#---------------------------------------#
#	LIBRARY								#
#---------------------------------------#

NAME 		:= libft.a

#---------------------------------------#
#	INGREDIENTS							#
#---------------------------------------#

SRCS_DIR	:= src
BUILD_DIR	:= .build
INC_DIR		:= include

SRCS 		:=			\
	ft_atoi.c			\
	ft_bzero.c			\
	ft_calloc.c			\
	ft_isalnum.c		\
	ft_isalpha.c		\
	ft_isascii.c		\
	ft_isdigit.c		\
	ft_isprint.c		\
	ft_itoa.c			\
	ft_memchr.c			\
	ft_memcmp.c			\
	ft_memcpy.c			\
	ft_memmove.c		\
	ft_memset.c			\
	ft_putchar_fd.c		\
	ft_putendl_fd.c		\
	ft_putnbr_fd.c		\
	ft_putstr_fd.c		\
	ft_split.c			\
	ft_strchr.c			\
	ft_strdup.c			\
	ft_striteri.c		\
	ft_strjoin.c		\
	ft_strlcat.c		\
	ft_strlcpy.c		\
	ft_strlen.c			\
	ft_strmapi.c		\
	ft_strncmp.c		\
	ft_strnstr.c		\
	ft_strrchr.c		\
	ft_strtrim.c		\
	ft_substr.c			\
	ft_tolower.c		\
	ft_toupper.c		\
	ft_lstadd_back.c	\
	ft_lstadd_front.c	\
	ft_lstclear.c		\
	ft_lstdelone.c		\
	ft_lstiter.c		\
	ft_lstlast.c		\
	ft_lstmap.c			\
	ft_lstnew.c			\
	ft_lstsize.c
SRCS		:= $(SRCS:%=$(SRCS_DIR)/%)
OBJS 		:= $(SRCS:$(SRCS_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS		:= $(OBJS:.o=.d)

#---------------------------------------#
#	UTENSILS							#
#---------------------------------------#

CC 			:= cc
CFLAGS 		:= -Wall -Wextra -Werror
CPPFLAGS	:= -MMD -MP -I$(INC_DIR)
AR			:= ar
ARFLAGS		:= -r -c -s
RM			:= rm -r -f 
MAKEFLAGS	+= --no-print-directory
DIR_DUP		= mkdir -p $(@D)

#---------------------------------------#
#	FORMAT								#
#---------------------------------------#

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
NC = \033[0m

#---------------------------------------#
#	RECIPES								#
#---------------------------------------#

all: $(NAME)

$(NAME): $(OBJS)
	$(info $(BLUE)Linking...$(NC)\n$^)
	@$(AR) $(ARFLAGS) $@ $^
	$(info $(YELLOW)Library $(NAME) ready!$(NC))

$(BUILD_DIR)/%.o: $(SRCS_DIR)/%.c
	$(info $(GREEN)Compiling $(NC)$< $(GREEN)-> $(NC)$@)
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<
	$(info $(YELLOW)Sources compiled!$(NC))
-include $(DEPS)

clean:
	$(RM)f $(BUILD_DIR) 
	$(info (RED)Deleting... $(NC)\n$(OBJS)\n$(RED)>> 🗑️$(NC))

fclean: clean
	$(info (RED)Deleting... $(NC)\n$(NAME)\n$(RED)>> 🗑️$(NC))
	$(RM) $(NAME)

re: fclean all
	@echo -n "Reseting"

#---------------------------------------#
#	SPECIAL RULES						#
#---------------------------------------#

.PHONY: clean fclean re all