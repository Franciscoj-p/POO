#include "../include/armaduraPesada.h"

ArmaduraPesada::ArmaduraPesada() 
: Armadura() {
    durabilidad = 200.0f;
    dañoAbs = 0.65f; //absorbe el 65% del daño
    reduccionMovimiento = 0.4f; //reduce la velocidad en un 40%
}

std::string ArmaduraPesada::describir() const {
    return "Armadura Pesada: Ofrece muy buena protección aunque baja movilidad.";
}
