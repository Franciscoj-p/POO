#include "../include/armaduraPesada.h"
#include "../include/balance.h"

ArmaduraPesada::ArmaduraPesada() 
: Armadura() {
    durabilidad = PESADA_DURABILIDAD;
    dañoAbs = PESADA_DAÑO_ABS; 
}

std::string ArmaduraPesada::describir() const {
    return "Armadura Pesada: Ofrece muy buena protección aunque baja movilidad.";
}
