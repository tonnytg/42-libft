# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 15:52:20 by antthoma          #+#    #+#              #
#    Updated: 2022/06/13 17:27:27 by antthoma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= gcc
CC_FLAGS	= -std=c99 -Wall -Werror -Wextra -I . -c
NAME 		= libft.a
FILES		= \
				ft_isalnum.c  ft_isalpha.c  ft_isascii.c  ft_isdigit.c  \
				ft_isprint.c ft_memset.c  ft_strlen.c
OBJS		= $(patsubst %.c,%.o, $(FILES))

all:
	$(CC) $(CC_FLAGS) $(FILES)
	ar rsc $(NAME) $(OBJS)

test:
	gcc -Wall src/ft_strlen.c tests/ft_strlen_test.c

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re
