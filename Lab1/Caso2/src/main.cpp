#include <iostream>
#include "../include/escala.h"
#include "../include/estudiante.h"
#include "../include/evaluacion.h"
#include <vector>

int main() {
    std::cout << "escalaMin: ";
    double min;
    std::cin >> min;
    std::cout << "escalaMax: ";
    double max;
    std::cin >> max;
    Escala escala(min, max); 

    double nMin;
    std::cout << "nMin: ";
    std::cin >> nMin;
    Evaluacion eval(nMin);

    int numNotas = 4;
    std::vector<double> notas(numNotas);

    std::cout << "Ingrese las notas del estudiante:\n";
    std::cout << "Nota Proyecto Final: ";
    std::cin >> notas[0];
    std::cout << "Nota Exposicion: ";
    std::cin >> notas[1];
    std::cout << "Nota Talleres: ";
    std::cin >> notas[2];
    std::cout << "Nota Parcial: ";
    std::cin >> notas[3];
    Estudiante estudiante(notas);

    Componente proyect("Proyecto Final", 0.3, notas[0]);
    estudiante.agregarComponente(proyect);
    Componente expo("Exposicion", 0.2, notas[1]);
    estudiante.agregarComponente(expo);
    Componente taller("Talleres", 0.3, notas[2]);
    estudiante.agregarComponente(taller);
    Componente parcial("Parcial", 0.2, notas[3]);
    estudiante.agregarComponente(parcial);

    eval.reporteEstudiante(estudiante); 

    return 0;
}
