all: libfttester war-machine
	@echo "Finish test"

libfttester:
	@echo "test1"
	cd libft && git clone git@github.com:Tripouille/libftTester.git
	cd libft && cd libftTester && make

war-machine:
	@echo "test2"
	cd libft && git clone git@github.com:y3ll0w42/libft-war-machine.git
	cd libft && cd libft-war-machine && bash grademe.sh
	cd libft && cd libft-war-machine && bash grademe.sh