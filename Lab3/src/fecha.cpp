#include "../include/fecha.h"
#include <sstream>

Fecha::Fecha() : dia(0), mes(0), año(0), hora(0) {}

Fecha::Fecha(int d, int m, int a, int h)
    : dia(d), mes(m), año(a), hora(h) {}

bool Fecha::compararFechas(const Fecha& otra) const {
    return (dia == otra.dia &&
            mes == otra.mes &&
            año == otra.año &&
            hora == otra.hora);
}

std::string Fecha::toString() const {
    std::ostringstream ss;
    ss << dia << "/" << mes << "/" << año << " - " << hora << ":00";
    return ss.str();
}
