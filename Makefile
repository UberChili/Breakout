CC = gcc
SRC_DIR = src
BIN_DIR = bin
SRC = $(wildcard $(SRC_DIR)/*.c)
OUT = $(BIN_DIR)/breakout

CFLAGS = -Wall -Werror -Wextra

UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Darwin)
    # CFLAGS = -I/opt/homebrew/include
    CFLAGS += -I/opt/homebrew/include -I/opt/homebrew/include/raylib.h
    LDFLAGS = -L/opt/homebrew/lib -lraylib -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo
else
    CFLAGS += -I/usr/include
    LDFLAGS = -lraylib -lm -ldl -lpthread -lGL -lX11
endif

$(OUT): $(SRC) | $(BIN_DIR)
	$(CC) $(SRC) -o $(OUT) $(CFLAGS) $(LDFLAGS)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

clean:
	rm -rf $(BIN_DIR)
