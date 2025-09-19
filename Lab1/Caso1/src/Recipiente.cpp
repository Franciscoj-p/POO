#include "../include/Recipiente.h"
#include <iostream>
#include <cmath> 
#include <vector>    

Recipiente::Recipiente(double r, double h, double H) {
    radio = r;
    alturaLlenado = h;
    alturaMax = H;
}


double Recipiente::getRadio() {
    return radio;
}

double Recipiente::getAlturaLlenado() {
    return alturaLlenado;
}

double Recipiente::getAlturaMax() {
    return alturaMax;
}

std::vector<double> Recipiente::calcularVolumenes() {
    double volumenTotal = M_PI * radio * radio * alturaMax;
    double volumenLlenado = M_PI * radio * radio * alturaLlenado;

    std::vector<double> resultado;
    resultado.push_back(volumenTotal);
    resultado.push_back(volumenLlenado);

    return resultado;
}