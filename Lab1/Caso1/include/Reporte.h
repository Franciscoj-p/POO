#ifndef REPORTE_H
#define REPORTE_H
#include <vector>

class Reporte {
public:
    double convertirALitros(double volumen);
    void mostrarResultados(const std::vector<double>& volumenes);
};

#endif
