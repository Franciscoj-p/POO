# Compilador
CXX = g++
CXXFLAGS = -Wall -std=c++03 -Wextra -pedantic -Wshadow -Wconversion -Iinclude

# Directorios
SRC = src
BIN = bin

# Archivos fuente
SRCS = $(SRC)/main.cpp $(SRC)/arma.cpp $(SRC)/espada.cpp $(SRC)/arco.cpp $(SRC)/hacha.cpp $(SRC)/cuchillo.cpp

# Ejecutable
EXEC = $(BIN)/main

all: $(EXEC)

$(EXEC): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(BIN)/*
