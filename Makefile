#LIB=-L
INC=-Iinclude
CC=g++

CFLAGS = -c -Wall 
SOURCES= src

default:    main

main.o:  main.cpp
        $(CC) $(CFLAGS) $(LIB) $(INC) main.cpp -o main
clean:
        rm -r main
