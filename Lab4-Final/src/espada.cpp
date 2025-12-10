#include "../include/espada.h"
#include "../include/balance.h"

Espada::Espada()
: Arma() {
    dañoAtaque = ESPADA_DAÑO;
    precision = ESPADA_PRECISION;  
}

std::string Espada::describir() const {
    return "Espada: arma ligera y afilada, moderada precision y daño considerable.";
}
