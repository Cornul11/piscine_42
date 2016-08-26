# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dplamade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/15 09:19:21 by dplamade          #+#    #+#              #
#    Updated: 2016/08/16 10:23:07 by dplamade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

IDIR = includes/
SOURCES_N = ft_count.c \
		  ft_operations.c \
		  ft_putnbr.c \
		  main.c

SOURCES = $(patsubst %,srcs/%, $(SOURCES_N))

all: $(NAME) 

$(NAME):
	gcc -o $(NAME) -Wall -Wextra -Werror $(SOURCES) -I$(IDIR)

clean:
	/bin/rm -f $(NAME)
