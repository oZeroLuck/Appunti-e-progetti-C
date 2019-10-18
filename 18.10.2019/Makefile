Main.exe: Point.o Rectangle.o Main.o
	       g++  Point.o Rectangle.o Main.o -o Main.exe

Main.o: Main.cpp ./include/Point.h ./include/Rectangle.h
	     g++ -I./include -c -g Main.cpp -o Main.o

Point.o: ./source/Point.cpp
	    g++ -I./include -c ./source/Point.cpp -o Point.o

Rectangle.o: ./source/Rectangle.cpp
	    g++ -I./include -c ./source/Rectangle.cpp -o Rectangle.o
