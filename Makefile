icbm: build/main.o build/vector.o
	g++ -o icbm build/main.o build/vector.o

build/main.o: src/main.cpp src/vector.h
	g++ -c -o build/main.o src/main.cpp

build/vector.o: src/vector.h src/vector.cpp
	g++ -c -o build/vector.o src/vector.cpp
