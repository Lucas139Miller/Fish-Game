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
${BIN}/${TARGET}: ${BUILD}/main.o
	${CC} ${BUILD}/*.o -o ${BIN}/${TARGET}


#COMPILING
${BUILD}/main.o:
	${CC} -c ${SRC}/main.cpp -o ${BUILD}/main.o


#PRE CONFIGURATION
setup:
	mkdir -p ${BUILD}
	mkdir -p ${BIN}


run: 
	${BIN}/${TARGET}

#Ms, Libélulas, Superman