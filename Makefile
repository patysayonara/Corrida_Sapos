#Makefile for "corridaSapos" C++ Application
#Created by Patricia Sayonara Goes de Araujo 05/06/2018

PROG = bin/corridaSapos
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o sapos.o pistas.o
RM = -f *.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)
	mv *.o build/

main.o: include/sapos.hpp include/pistas.hpp
	$(CC) $(CPPFLAGS) -c src/main.cpp

sapos.o: include/sapos.hpp
	$(CC) $(CPPFLAGS) -c src/sapos.cpp

pistas.o: include/pistas.hpp
	$(CC) $(CPPFLAGS) -c src/pistas.cpp

clean:
	rm -f $(PROG) build/*.o
