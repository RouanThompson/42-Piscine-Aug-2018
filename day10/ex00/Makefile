# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rothomps <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/04 19:57:16 by rothomps          #+#    #+#              #
#    Updated: 2018/09/04 20:02:55 by rothomps         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBRARY = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	  srcs/ft_swap.c

all: $(LIBRARY)

$(LIBRARY):
	gcc -c -Wall -Wextra -Werror -Iincludes $(SRC)
	ar rc $(LIBRARY) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib $(LIBRARY)

clean:
	/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	/bin/rm -f $(LIBRARY)

re: fclean all
