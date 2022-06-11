
SRC = ./src
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
APPS = ./apps

all: libed myapps

libed: \
	float_vector.o \
	mytime.o

myapps:
	gcc $(APPS)/app.c 				$(OBJ)/*.o 	-I $(INCLUDE) -o $(BIN)/app
	gcc $(APPS)/app_com_mytime.c 	$(OBJ)/*.o 	-I $(INCLUDE) -o $(BIN)/app_com_mytime

%.o: $(SRC)/%.c $(INCLUDE)/%.h
	@mkdir -p $(BIN)
	@mkdir -p $(OBJ)
	gcc -c $< 	-I $(INCLUDE) -o $(OBJ)/$@

test:
	$(BIN)/app

run:
	$(BIN)/app

clean:
	rm $(BIN)/* $(OBJ)/*
