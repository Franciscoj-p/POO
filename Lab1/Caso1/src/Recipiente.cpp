#include "../include/Recipiente.h"
#include <iostream>
#include <cmath>      

Recipiente::Recipiente(double r, double H) {
    radio = r;
    alturaMax = H;
}


double Recipiente::getRadio() {
    return radio;
}

double Recipiente::getAlturaMax() {
    return alturaMax;
}

double Recipiente::calcularVolumenTotal() {
    return M_PI * radio * radio * alturaMax;
}
