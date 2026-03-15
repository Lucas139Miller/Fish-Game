#VARiABLES
CC = g++

#EXECUTABEL NAME
TARGET = prog

#FOLDERS
SRC = src
INCLUDE = include
BUILD = build
BIN = bin

all: setup ${BIN}/${TARGET}

#LINKING
${BIN}/${TARGET}: ${BUILD}/main.o ${BUILD}/GameSettings.o
	${CC} ${BUILD}/*.o -o ${BIN}/${TARGET}


#COMPILING
${BUILD}/main.o: ${SRC}/main.cpp
	${CC} -c -I${INCLUDE} ${SRC}/main.cpp -o ${BUILD}/main.o
${BUILD}/GameSettings.o: ${SRC}/GameSettings.cpp
	${CC} -c -I${INCLUDE} ${SRC}/GameSettings.cpp -o ${BUILD}/GameSettings.o


#PRE CONFIGURATION
setup:
	mkdir -p ${BUILD}
	mkdir -p ${BIN}


run: 
	${BIN}/${TARGET}

#Ms, Libélulas, Superman, V