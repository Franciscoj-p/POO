#include "../include/armaduraLiviana.h"

ArmaduraLiviana::ArmaduraLiviana() 
: Armadura() {
    durabilidad = 100.0f;
    dañoAbs = 0.3f; //absorbe el 30% del daño
    reduccionMovimiento = 0.1f; //reduce la velocidad en un 10%
}

std::string ArmaduraLiviana::describir() const {
    return "Armadura Liviana: Ofrece buena movilidad y protección moderada.";
}
