# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sithemio <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/14 20:45:48 by sithemio          #+#    #+#              #
#    Updated: 2019/04/14 22:31:18 by sithemio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
FLAGS = -Wall -Wextra -Werror
SRCS = srcs/*.c
OUTP = *.o
HEADER = includes/*.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS)
	gcc $(OUTP) -o $(NAME)

clean:
	rm -f $(OUTP)

fclean: clean
	rm -f $(NAME)

re: fclean all
