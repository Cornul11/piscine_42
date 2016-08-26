# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dplamade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/15 09:19:21 by dplamade          #+#    #+#              #
#    Updated: 2016/08/18 20:20:58 by dplamade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SOURCE = ft_cat.c ft_errors.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SOURCE) -Iincludes
	gcc -o $(NAME) ft_cat.o ft_errors.o
	
clean:
	/bin/rm -f ft_cat.o ft_errors.o

fclean: clean
	/bin/rm -f $(NAME)
