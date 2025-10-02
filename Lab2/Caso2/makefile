# Compilador
CXX = g++
CXXFLAGS = -Wall -std=c++03 -Iinclude

# Directorios
SRC = src
BIN = bin

# Archivos fuente
SRCS = $(SRC)/main.cpp $(SRC)/cita.cpp $(SRC)/consultorio.cpp $(SRC)/doctor.cpp $(SRC)/paciente.cpp

# Ejecutable
EXEC = $(BIN)/caso2

all: $(EXEC)

$(EXEC): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(BIN)/*
