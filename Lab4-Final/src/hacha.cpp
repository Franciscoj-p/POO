#include "../include/hacha.h"
#include "../include/balance.h"

Hacha::Hacha()
: Arma() {
    dañoAtaque = HACHA_DAÑO;
    precision = HACHA_PRECISION;  
}

std::string Hacha::describir() const {
    return "Un Hacha pesada y poderosa, dificil de manejar";
}
