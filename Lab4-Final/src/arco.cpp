#include "../include/arco.h"
#include "../include/balance.h"

Arco::Arco()
: Arma() {
    dañoAtaque = ARCO_DAÑO;
    precision = ARCO_PRECISION;  
}

std::string Arco::describir() const {
    return "Una arco ligero, su precision depende de la habilidad del portador.";
}
