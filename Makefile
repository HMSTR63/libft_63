# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 22:42:56 by sojammal          #+#    #+#              #
#    Updated: 2024/10/31 18:46:52 by sojammal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      ft_strlen.c ft_memset.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	  ft_strlcat.c ft_strlcpy.c ft_bzero.c ft_toupper.c ft_tolower.c ft_strchr.c \
	  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c 
	  

OBJ := $(SRC:%.c=%.o)
RM = rm -f
AR = ar rcs
NAME = libft.a

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) -rf $(OBJ)

fclean: clean
	$(RM) -rf $(OBJ) $(NAME)

re: fclean all
