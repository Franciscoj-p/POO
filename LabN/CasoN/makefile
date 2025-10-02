# Compilador
CXX = g++
CXXFLAGS = -Wall -std=c++03 -Iinclude

# Directorios
SRC = src
BIN = bin

# Archivos fuente
SRCS = $(SRC)/main.cpp $(SRC)/--.cpp $(SRC)/--.cpp $(SRC)/--.cpp $(SRC)/--.cpp

# Ejecutable
EXEC = $(BIN)/casoN

all: $(EXEC)

$(EXEC): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(BIN)/*
