# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dplamade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/15 09:19:21 by dplamade          #+#    #+#              #
#    Updated: 2016/08/18 20:33:10 by dplamade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SOURCE = ft_tail.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SOURCE) -Iincludes
	gcc -o $(NAME) ft_tail.o
	
clean:
	/bin/rm -f ft_tail.o

fclean: clean
	/bin/rm -f $(NAME)
