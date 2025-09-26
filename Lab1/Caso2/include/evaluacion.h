#ifndef EVALUACION_H
#define EVALUACION_H
#include <vector>
#include "estudiante.h"

class Evaluacion {
private:
    double notaMinima;
public:
    Evaluacion(double notaMinima);
    bool estaAprobado(double notaFinal);
    void reporteEstudiante(const Estudiante& estudiante);
    double calcularNota(const Estudiante& estudiante);
};

#endif
