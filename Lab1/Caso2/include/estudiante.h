#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <vector>
#include "componente.h"

class Estudiante {
private:
    std::vector<double> notas;
    std::vector<Componente> componentes;
public:
    Estudiante(std::vector<double> notas);
    void agregarComponente(const Componente& c);
    std::vector<double> getNotas() const;
    std::vector<Componente> getComponentes() const;
};

#endif
