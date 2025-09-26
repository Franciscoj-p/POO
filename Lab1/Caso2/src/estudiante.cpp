#include "../include/estudiante.h"
#include <iostream>

Estudiante::Estudiante(std::vector<double> notas) {
    this->notas = notas;
}
void Estudiante::agregarComponente(const Componente& c) {
    componentes.push_back(c);
}
std::vector<double> Estudiante::getNotas() const {
    return notas;
}
std::vector<Componente> Estudiante::getComponentes() const {
    return componentes;
}
