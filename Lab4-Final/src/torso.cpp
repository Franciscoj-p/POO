#include "../include/torso.h"
#include "../include/balance.h"

Torso::Torso() 
: ParteCuerpo() {
    integridad = TORSO_INTEGRIDAD;
    dañoLocal = TORSO_MULT_DAÑO; 
    llevaArma = false; 
    nombre = "torso";  
    armadura = 0;
    modificadorPrecision = TORSO_MOD_PRECISION;
}