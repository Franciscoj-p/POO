#include "../include/cabeza.h"
#include "../include/balance.h"

Cabeza::Cabeza() 
: ParteCuerpo() {
    integridad = CABEZA_INTEGRIDAD;
    dañoLocal = CABEZA_MULT_DAÑO; 
    llevaArma = false; 
    nombre = "cabeza";  
    armadura = 0;
}