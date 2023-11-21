CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Diretórios
SRC_DIR = src
INCLUDE_DIR = include
BIN_DIR = bin

# Arquivos fonte e objetos
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(SRC_DIR)/%.o, $(SRCS))

# Nome do executável
EXECUTABLE = Adega_do_Primo

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJS)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c -o $@ $<

.PHONY: clean

clean:
	# Nada é excluído aqui, apenas uma mensagem de limpeza
	@echo "Nada a ser excluído."

