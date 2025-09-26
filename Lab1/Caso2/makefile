# Compilador
CXX = g++
CXXFLAGS = -Wall -std=c++03 -Iinclude

# Directorios
SRC = src
BIN = bin

# Archivos fuente
SRCS = $(SRC)/main.cpp $(SRC)/escala.cpp $(SRC)/evaluacion.cpp $(SRC)/estudiante.cpp $(SRC)/componente.cpp

# Ejecutable
EXEC = $(BIN)/caso2

all: $(EXEC)

$(EXEC): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(BIN)/*
