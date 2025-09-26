#include "../include/evaluacion.h"
#include <iostream>
#include <vector>
#include "../include/componente.h"
#include "../include/estudiante.h"

Evaluacion::Evaluacion(double notaMinima) {
    this->notaMinima = notaMinima;
}
bool Evaluacion::estaAprobado(double notaFinal) {
    return notaFinal >= notaMinima;
}
double Evaluacion::calcularNota(const Estudiante& estudiante) {
    double suma = 0.0;
    const std::vector<Componente>& comp = estudiante.getComponentes();
    std::vector<double> notas;
    for (size_t i = 0; i < comp.size(); i++) {
    notas.push_back(comp[i].calcularNotaPonderada());
    }
    for (size_t i = 0; i < notas.size(); i++) {
    suma += notas[i];
    }
    return suma;
}
void Evaluacion::reporteEstudiante(const Estudiante& estudiante) {
    double notaFinal = calcularNota(estudiante);
    bool aprobado = estaAprobado(notaFinal);
    std::cout << "Reporte del Estudiante:\n";
    std::cout << "Notas: ";
    std::vector<double> notas = estudiante.getNotas();
    for (size_t i = 0; i < notas.size(); i++) {
    std::cout << notas[i] << " ";
    }
    std::cout << "\nNota Final: " << notaFinal << "\n";
    std::cout << "Estado: " << (aprobado ? "Aprobado" : "Reprobado") << "\n";
}
