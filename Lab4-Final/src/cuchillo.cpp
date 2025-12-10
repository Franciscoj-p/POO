#include "../include/cuchillo.h"
#include "../include/balance.h"

Cuchillo::Cuchillo()
: Arma() {
    dañoAtaque = CUCHILLO_DAÑO;
    precision = CUCHILLO_PRECISION;  
}

std::string Cuchillo::describir() const {
    return "Cuchillo confiable, ligero y preciso";
}
