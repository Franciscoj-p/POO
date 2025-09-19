#include "../include/Reporte.h"
#include <iostream>

double Reporte::convertirALitros(double volumen) {
    return volumen * 1000;
}

void Reporte::mostrarResultados(const std::vector<double>& volumenes) {
    std::cout << "Volumen maximo del recipiente (m³): " << volumenes[0] << std::endl;
    std::cout << "Volumen de leche en el recipiente (m³): " << volumenes[1] << std::endl;
    std::cout << "Cantidad maxima de leche (L): " << convertirALitros(volumenes[0]) << std::endl;
    std::cout << "Cantidad de leche en el recipiente (L): " << convertirALitros(volumenes[1]) << std::endl;
}

