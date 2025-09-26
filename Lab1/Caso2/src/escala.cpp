#include "../include/escala.h"
#include <iostream>

Escala::Escala(double min, double max) {
    minimo = min;
    maximo = max;
}
bool Escala::validar(double valor) {
    return valor >= minimo && valor <= maximo;
}
