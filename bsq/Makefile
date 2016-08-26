# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dplamade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/24 20:47:14 by dplamade          #+#    #+#              #
#    Updated: 2016/08/24 20:47:27 by dplamade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= bsq


SRC			= bsq.c\
error.c\
libft1.c\
libft2.c\
map.c\
map_chars.c\
nb_lines.c\
print.c\
read.c\
square.c

OBJ			= $(SRC:.c=.o)

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) -c $(SRC)
	$(CC) $(OBJ) -o $(NAME)


clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
