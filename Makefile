CC = gcc
CFLAGS = -g
INCLUDES = -I ./include $(shell pkg-config --cflags sdl2)
SDL_LIBS = $(shell pkg-config --libs sdl2)

.PHONY: all run
all:
	$(CC) $(CFLAGS) $(INCLUDES) ./src/main.c $(SDL_LIBS) -o ./bin/main

run: all
	./bin/main