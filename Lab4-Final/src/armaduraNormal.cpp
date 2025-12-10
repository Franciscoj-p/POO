#include "../include/armaduraNormal.h"
#include "../include/balance.h"

ArmaduraNormal::ArmaduraNormal() 
: Armadura() {
    durabilidad = NORMAL_DURABILIDAD;
    dañoAbs = NORMAL_DAÑO_ABS; 
}

std::string ArmaduraNormal::describir() const {
    return "Una armadura estándar que ofrece un equilibrio entre protección y movilidad.";
}