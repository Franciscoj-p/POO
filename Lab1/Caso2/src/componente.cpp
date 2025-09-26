#include <iostream>
#include <string>
#include <vector>
#include "componente.h"

Componente::Componente(std::string nombre, double peso, double nota) {
    this->nombre = nombre;
    this->peso = peso;
    this->nota = nota;
}
std::string Componente::getNombre() {
    return nombre;
}
double Componente::getPeso() {
    return peso;
}
double Componente::getNota() {
    return nota;
}
void Componente::setNota(double nota) {
    this->nota = nota;
}
double Componente::calcularNotaPonderada() const {
    return (nota * peso);
}   