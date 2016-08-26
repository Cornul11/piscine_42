# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dplamade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/20 14:28:52 by dplamade          #+#    #+#              #
#    Updated: 2016/08/20 14:29:00 by dplamade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRC = eval.c main.c print.c
all: $(NAME)
$(NAME):
	gcc -Wall -Werror -Wextra $(SRC) -o $(NAME) -Iincludes
clean:
	rm -f eval.o
fclean: clean
	rm -f $(NAME)
re: fclean all
