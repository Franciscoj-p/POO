#ifndef FECHA_H
#define FECHA_H

struct Fecha {
    int dia;
    int mes;
    int año;
    int hora;

    int diferenciaAños(const Fecha& f1, const Fecha& f2) const {
        int diff = f2.año - f1.año;
        if (f2.mes < f1.mes || (f2.mes == f1.mes && f2.dia < f1.dia))
            diff--;
        return diff;
    }
};
#endif
