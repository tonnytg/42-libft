CC	= gcc
CC_ARGS = -Wextra -Wall -Werror -Werror=sign-compare -I . -c

NAME = libft.a
FILES = $(wildcard libft/*.c)

all: copy check copile clean

copile:
	$(CC) $(CC_ARGS) $(FILES)

copy:
	cp -v -a ../libft-v1/* libft
	@echo "---"

check:
	norminette -R CheckForbiddenSourceHeader libft/ft*.c
	@echo "---"

clean:
	rm -rf *.o
	rm -rf $(NAME)