#include "../include/espada.h"
#include "../include/hacha.h"
#include "../include/cuchillo.h"
#include "../include/arco.h"
#include "../include/armaduraPesada.h"
#include "../include/armaduraLiviana.h"
#include "../include/armaduraNormal.h"
#include "../include/torso.h"
#include "../include/cabeza.h"
#include "../include/brazos.h"
#include "../include/piernas.h"
#include "../include/cuerpo.h"
#include "../include/UI.h"

Arma* elegirArmaUsuario() {
    int opcion;
    std::cout << "Elige tu arma: 1. Espada 2. Hacha 3. Arco 4. Cuchillo: ";
    std::cin >> opcion;
    switch(opcion) {
        case 1: return new Espada();
        case 2: return new Hacha();
        case 3: return new Arco();
        case 4: return new Cuchillo();
        default: return new Espada(); // por defecto
    }
}

Armadura* elegirArmaduraUsuario() {
    int opcion;
    std::cout << "Elige tu armadura: 1. Pesada 2. Normal 3. Liviana: ";
    std::cin >> opcion;
    switch(opcion) {
        case 1: return new ArmaduraPesada();
        case 2: return new ArmaduraNormal();
        case 3: return new ArmaduraLiviana();
        default: return new ArmaduraNormal();
    }
}

Arma* elegirArmaOponente() {
    int opcion = rand() % 4;
    std::cout << "Oponente elige arma: " << opcion+1 << std::endl;
    switch(opcion) {
        case 0: return new Espada();
        case 1: return new Hacha();
        case 2: return new Arco();
        case 3: return new Cuchillo();
    }
    return new Espada();
}

Armadura* elegirArmaduraOponente() {
    int opcion = rand() % 3;
    std::cout << "Oponente elige armadura: " << opcion+1 << std::endl;
    switch(opcion) {
        case 0: return new ArmaduraPesada();
        case 1: return new ArmaduraNormal();
        case 2: return new ArmaduraLiviana();
    }
    return new ArmaduraNormal();
}