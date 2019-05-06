# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sithemio <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/08 12:45:13 by sithemio          #+#    #+#              #
#    Updated: 2019/04/08 16:44:52 by sithemio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c\
	  srcs/ft_swap.c

LIB = includes/*.h

FLAGS = -Wall -Werror -Wextra

OUTP = *.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(LIB)
	ar rc $(NAME) $(OUTP)
	ranlib $(NAME)

clean:
	rm -f $(OUTP)

fclean: clean
	rm -f $(OUTP) $(NAME)

re: fclean all
