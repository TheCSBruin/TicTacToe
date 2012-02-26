#tictactoe.make
# make file for tictactoe
# files: source: main.cpp game.cpp player.cpp board.cpp
#	 header: game.h player.h board.h
# creates executable file: tictactoe
#

CFLAGS = -Wall
CC = g++
SRC_PATH = src
OBJ_PATH = obj
BIN_PATH = bin

# target file: tictactoe
# dependencies: main.o game.o player.o board.o 
${BIN_PATH}/tictactoe : ${OBJ_PATH}/main.o ${OBJ_PATH}/game.o ${OBJ_PATH}/player.o ${OBJ_PATH}/board.o
	${CC} -o ${BIN_PATH}/tictactoe ${OBJ_PATH}/main.o ${OBJ_PATH}/game.o ${OBJ_PATH}/player.o ${OBJ_PATH}/board.o ${CFLAGS}

# each object file with dependencies
${OBJ_PATH}/main.o : ${SRC_PATH}/main.cpp ${SRC_PATH}/game.h
	${CC} -c -o ${OBJ_PATH}/main.o ${SRC_PATH}/main.cpp ${CFLAGS}
${OBJ_PATH}/game.o : ${SRC_PATH}/game.cpp ${SRC_PATH}/game.h ${SRC_PATH}/player.h ${SRC_PATH}/board.h
	${CC} -c -o ${OBJ_PATH}/game.o ${SRC_PATH}/game.cpp ${CFLAGS}
${OBJ_PATH}/player.o : ${SRC_PATH}/player.cpp ${SRC_PATH}/player.h ${SRC_PATH}/game.h
	${CC} -c -o ${OBJ_PATH}/player.o ${SRC_PATH}/player.cpp ${CFLAGS}
${OBJ_PATH}/board.o : ${SRC_PATH}/board.cpp ${SRC_PATH}/board.h
	${CC} -c -o ${OBJ_PATH}/board.o ${SRC_PATH}/board.cpp ${CFLAGS}
clean: 
	rm ${OBJ_PATH}/*.o ${BIN_PATH}/tictactoe

#END OF MAKE FILE
