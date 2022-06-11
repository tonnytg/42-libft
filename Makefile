NAME		= 	libft.a
CFLAGS		= 	-Wall -Werror -Wextra -I . -c
TFLAGS		= 	-Wall -Werror -Wextra
SRC			= 	./src
TESTF		=	./tests
FILES		= 	\
				ft_strlen.c \
				ft_isdigit.c

OBJ			= $(FILES:%.c=%.o)
TESTC		= $(FILES:%.c=%_test.c)
TESTO		= $(FILES:%.c=%_test.o)

all: copy $(NAME)

copy:
	cp -f $(SRC)/*.c .

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	cp -a $(NAME) $(TESTF)

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

test: ft_strlen_test.c

ft_strlen_test.c: ft_strlen.c
	gcc $(TFLAGS) $(TESTF)/$@ -o teste.o
	@echo -e "Compiled "$<" successfully!\n"

# $(TESTO): $(FILES)
# 	./$@

clean:
	rm -f $(OBJ)
	rm -f $(FILES).c
	rm -f *.c
	rm -rf *.o

fclean: clean
	rm -f $(NAME)
	rm -f $(TESTS)/$(NAME)

re: fclean all

.PHONY: clean fclean all re
