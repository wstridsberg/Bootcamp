CXX = g++
NAME = shapes
all: main.o libshapes.so
	$(CXX) main.o -L. -lshapes -o $(NAME)

main.o: src/main.cpp
	$(CXX) -c src/main.cpp -I include/ -o main.o 

libshapes.so: src/shape.cpp
	$(CXX) --shared -fPIC src/shape.cpp -I include/ -o libshapes.so

clean:
	rm main.o
	rm libshapes.so


