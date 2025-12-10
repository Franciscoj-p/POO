#include "../include/piernas.h"
#include "../include/balance.h"

Piernas::Piernas() 
: ParteCuerpo() {
    integridad = PIERNAS_INTEGRIDAD;
    dañoLocal = PIERNAS_MULT_DAÑO; 
    llevaArma = false; 
    nombre = "piernas";  
    armadura = 0;
}