CC=g++
SRCS=src/main.cpp src/Game.cpp src/Box.cpp src/Shapes.cpp
FLAGS=-lSDL2 

main: $(SRCS)
	$(CC) $(SRCS) -o main $(FLAGS)
