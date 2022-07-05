all: libfttester war-machine
	@echo "Finish test"

libfttester:
	@echo "test1"
	cd libft && wget https://github.com/Tripouille/libftTester/archive/refs/heads/master.zip
	cd libft && cd unzip master.zip
	cd libft && rm -rf master.zip
	cd libft/libftTester && make

war-machine:
	@echo "test2"
	cd libft && wget https://github.com/y3ll0w42/libft-war-machine/archive/refs/heads/master.zip
	cd libft && cd unzip master.zip
	cd libft && rm -rf master.zip
	cd libft/libft-war-machine && bash grademe.sh
	cd libft/libft-war-machine && bash grademe.sh