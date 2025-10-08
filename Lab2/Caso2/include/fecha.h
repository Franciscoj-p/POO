#ifndef FECHA_H
#define FECHA_H

struct Fecha {
    int dia;
    int mes;
    int año;
    int hora;

    Fecha();
    Fecha(int d, int m, int a, int h);
};
#endif
