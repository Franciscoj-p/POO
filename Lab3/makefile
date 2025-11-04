#comp y flags
CXX = g++
CXXFLAGS = -Wall -std=c++03 -Iinclude
#directorios
SRC = src
BIN = bin
#archivos fuente
SRCS = $(SRC)/main.cpp \
       $(SRC)/cita.cpp \
       $(SRC)/consultorio.cpp \
       $(SRC)/doctor.cpp \
       $(SRC)/paciente.cpp \
       $(SRC)/fecha.cpp \
       $(SRC)/agenda.cpp \
	   $(SRC)/sistemaConsultorio.cpp

#archivo ejecutable
EXEC = $(BIN)/consultorio

all:
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(SRCS)

clean:
	rm -f $(EXEC)