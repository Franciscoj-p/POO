#include "../include/parteCuerpo.h"
#include "../include/arma.h"
#include "../include/armadura.h"
#include <iostream>

ParteCuerpo::ParteCuerpo() :
    nombre(""),
    integridad(0.0f),
    dañoLocal(0.0f),
    llevaArma(false),
    arma(0),
    armadura(0)
{}

std::string ParteCuerpo::getNombre() const { return nombre; }

float ParteCuerpo::getIntegridad() const { return integridad; }

float ParteCuerpo::getDañoLocal() const { return dañoLocal; }

const Armadura* ParteCuerpo::getArmadura() const { return armadura; }
/** Método para que la parte del cuerpo reciba daño, aplicando la armadura si está equipada.
  Devuelve el daño efectivo recibido después de aplicar la armadura y el multiplicador local.
  además reduce la integridad de la parte del cuerpo según el daño recibido luego de la mitigación de la armadura.
   */
float ParteCuerpo::recibirDaño(float daño){
    float dañoRecibido = daño;
    if (armadura && armadura->getDurabilidad() > 0) {
        dañoRecibido = armadura->calcularDaño(daño);
        armadura->reducirDurabilidad(daño - dañoRecibido);
    }
    integridad -= dañoRecibido;
    return dañoRecibido * dañoLocal;
}

void ParteCuerpo::equiparArmadura(Armadura* a){
    this->armadura = a;
}

void ParteCuerpo::mostrarEstado() const{
    std::cout << "Parte del Cuerpo: " << nombre << std::endl;
    std::cout << "Integridad: " << integridad << std::endl;
    if (armadura) {
        std::cout << "Armadura equipada. Durabilidad: " << armadura->getDurabilidad() << std::endl;
    } else {
        std::cout << "No hay armadura equipada." << std::endl;
    }
}

ParteCuerpo::~ParteCuerpo() {}

bool ParteCuerpo::getLlevaArma() const { return llevaArma; }

bool ParteCuerpo::estaFuncional() const { return integridad > 0; }

const Arma* ParteCuerpo::getArma() const { return arma; }

void ParteCuerpo::equiparArma(Arma* a) { 
    if (llevaArma) {
        arma = a;
    }
 }