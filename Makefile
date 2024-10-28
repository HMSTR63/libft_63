# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojammal <sojammal@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 22:42:56 by sojammal          #+#    #+#              #
#    Updated: 2024/10/28 12:05:01 by sojammal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      ft_strlen.c ft_memset.c  

OBJ = $(SRC:%.c=%.o)
RM = rm -f
AR = ar rcs
NAME = libft.a

all: $(NAME)

obj:
	mkdir -p obj

%.o: %.c
	$(CC) $(CFLAGS) -I. -c $< -o $@

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) -rf $(OBJ)

fclean: clean
	$(RM) -rf $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re
