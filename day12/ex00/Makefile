# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sithemio <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/11 17:03:58 by sithemio          #+#    #+#              #
#    Updated: 2019/04/11 17:04:04 by sithemio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = ft_display_file
SRC = srcs/*.c
HEADER = includes

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS) -I $(HEADER) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean

re: fclean al
