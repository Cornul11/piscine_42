# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dplamade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/15 09:19:21 by dplamade          #+#    #+#              #
#    Updated: 2016/08/18 20:35:01 by dplamade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SOURCE = ft_display_file.c

all: $(NAME) 

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SOURCE)
	gcc -o $(NAME) ft_display_file.o
	
clean:
	/bin/rm -f ft_display_file.o

fclean: clean
	/bin/rm -f $(NAME)
