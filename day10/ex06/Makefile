# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sithemio <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/09 19:13:50 by sithemio          #+#    #+#              #
#    Updated: 2019/04/09 20:22:19 by sithemio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = ft_putchar.c ft_atoi.c ft_putnbr.c ft_putstr.c ft_strlen.c main.c

LIBH = *.h

LIBA = *.a

OUTP = *.o

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -I$(LIBH) -o $(NAME)

clean:
	rm -f $(NAME)
