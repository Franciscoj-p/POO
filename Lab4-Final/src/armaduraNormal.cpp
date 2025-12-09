#include "../include/armaduraNormal.h"

ArmaduraNormal::ArmaduraNormal() 
: Armadura() {
    durabilidad = 150.0f;
    dañoAbs = 0.5f; //absorbe el 50% del daño
    reduccionMovimiento = 0.2f; //reduce la velocidad en un 20%
}

std::string ArmaduraNormal::describir() const {
    return "Una armadura estándar que ofrece un equilibrio entre protección y movilidad.";
}