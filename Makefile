TERM=xterm-256color
SHELL=/bin/bash

OBJ	= ft_isdigit ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii \
	ft_isprint ft_itoa ft_memchr \
	ft_memcmp ft_memcpy ft_memmove ft_memset \
	ft_split ft_strchr \
	ft_strdup ft_striteri ft_strjoin ft_strlcat ft_strlcpy ft_strlen \
	ft_strmapi ft_strncmp ft_strnstr ft_strrchr ft_strtrim ft_substr \
	ft_tolower ft_toupper

all: mytest war-machine
	@echo "Finish test"

#libfttester:
#	@echo "test1"
#	cd libft && wget https://github.com/Tripouille/libftTester/archive/refs/heads/master.zip
#	cd libft && unzip master.zip
#	cd libft && rm -rf master.zip
#	cd libft/libftTester-master && make

war-machine:
	@echo "test2"
	cd libft && wget https://github.com/y3ll0w42/libft-war-machine/archive/refs/heads/master.zip
	cd libft && unzip master.zip
	cd libft && rm -rf master.zip
	cd libft/libft-war-machine-master && bash grademe.sh
	cd libft/libft-war-machine-master && bash grademe.sh

mytest: $(OBJ)

$(OBJ): copile
	@echo "Test - $@"
	@clang -g3 -ldl -I libft/ -L libft/ tests/$@_test.c -lft -o ./a.out -lbsd
	@./a.out
	sudo apt-get install libxmu-dev libxmu-headers freeglut3-dev libxext-dev libxi-dev

copile:
	make -C libft