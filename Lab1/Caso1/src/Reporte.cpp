#include "../include/Reporte.h"
#include <iostream>

double Reporte::convertirALitros(double volumen) {
    return volumen * 1000;
}

void Reporte::mostrarResultados(double volumen) {
    std::cout << "Volumen total (m³): " << volumen << std::endl;
    std::cout << "Cantidad maxima de leche (L): " << convertirALitros(volumen) << std::endl;
}

