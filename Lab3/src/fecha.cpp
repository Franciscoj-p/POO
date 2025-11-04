#include "../include/fecha.h"

Fecha::Fecha() {
    dia = 0;
    mes = 0;
    año = 0;
    hora = 0;
}

Fecha::Fecha(int d, int m, int a, int h) {
    dia = d;
    mes = m;
    año = a;
    hora = h;
}
