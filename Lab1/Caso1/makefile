# Compilador
CXX = g++
CXXFLAGS = -Wall -std=c++03 -Iinclude

# Directorios
SRC = src
BIN = bin

# Archivos fuente
SRCS = $(SRC)/main.cpp $(SRC)/Recipiente.cpp $(SRC)/Reporte.cpp

# Ejecutable
EXEC = $(BIN)/caso1

all: $(EXEC)

$(EXEC): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(BIN)/*
