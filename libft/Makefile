# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 15:52:20 by antthoma          #+#    #+#              #
#    Updated: 2022/07/07 16:00:45 by antthoma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
CC_FLAGS	= -std=c99 -Wall -Werror -Wextra -I . -c
NAME		= libft.a
FILES		= 	\
				ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
				ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
				ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
				ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
				ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 
OBJS		= $(patsubst %.c,%.o, $(FILES))

BONUS_FILE	=	\
			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
				
OBJS_BONUS	= $(patsubst %.c,%.o, $(BONUS_FILE))

all: $(OBJS)

bonus: $(OBJS) $(OBJS_BONUS)

%.o: %.c
	$(CC) $(CC_FLAGS) $< -o $@
	ar rsc $(NAME) $@


clean:
	rm -rf *.o

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re
