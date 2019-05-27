all: bin/icbm bin/pngtomap

bin/icbm: build/main.o build/vector.o
	g++ -o bin/icbm build/main.o build/vector.o

build/main.o: src/main.cpp src/vector.h
	g++ -c -o build/main.o src/main.cpp

build/vector.o: src/vector.h src/vector.cpp
	g++ -c -o build/vector.o src/vector.cpp

bin/pngtomap: src/pngtomap.c
	g++ -L/usr/lib/libpng.so -lpng -o bin/pngtomap src/pngtomap.c

clean:
	rm bin/*
	rm build/*
