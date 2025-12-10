#include "../include/armaduraLiviana.h"
#include "../include/balance.h"

ArmaduraLiviana::ArmaduraLiviana() 
: Armadura() {
    durabilidad = LIVIANA_DURABILIDAD;
    dañoAbs = LIVIANA_DAÑO_ABS; 
}

std::string ArmaduraLiviana::describir() const {
    return "Armadura Liviana: Ofrece buena movilidad y protección moderada.";
}
