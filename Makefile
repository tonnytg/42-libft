TERM=xterm-256color
SHELL=/bin/bash

all: libfttester war-machine
	@echo "Finish test"

libfttester:
	@echo "test1"
	cd libft && wget https://github.com/Tripouille/libftTester/archive/refs/heads/master.zip
	cd libft && unzip master.zip
	cd libft && rm -rf master.zip
	cd libft/libftTester-master && make

war-machine:
	@echo "test2"
	cd libft && wget https://github.com/y3ll0w42/libft-war-machine/archive/refs/heads/master.zip
	cd libft && unzip master.zip
	cd libft && rm -rf master.zip
	cd libft/libft-war-machine-master && bash grademe.sh
	cd libft/libft-war-machine-master && bash grademe.sh