# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dplamade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/15 09:19:21 by dplamade          #+#    #+#              #
#    Updated: 2016/08/15 12:02:41 by dplamade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

IDIR = includes/
SOURCES_N = ft_putchar.c \
		  ft_putstr.c \
		  ft_strcmp.c \
		  ft_strlen.c \
		  ft_swap.c

OBJFILES = $(SOURCES_N:.c=.o)
SOURCES = $(patsubst %,srcs/%, $(SOURCES_N))

all: $(NAME) 

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SOURCES) -I$(IDIR)
	ar rc $(NAME) $(OBJFILES)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJFILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
