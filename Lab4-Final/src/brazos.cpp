#include "../include/brazos.h"
#include "../include/arma.h"
#include "../include/balance.h"
#include <iostream>

Brazos::Brazos() 
: ParteCuerpo() {
    integridad = BRAZOS_INTEGRIDAD;
    dañoLocal = BRAZOS_MULT_DAÑO; 
    llevaArma = true; 
    nombre = "brazos";  
    armadura = 0;
}

void Brazos::mostrarEstado() const {
    ParteCuerpo::mostrarEstado();
    if (arma) {
        std::cout << "Arma equipada. Daño: " << arma->getDañoAtaque() << std::endl;
    } else {
        std::cout << "No hay arma equipada." << std::endl;
    }
}
