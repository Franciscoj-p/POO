#include "../include/parteCuerpo.h"
#include <iostream>

ParteCuerpo::ParteCuerpo() :
    nombre(""),
    integridad(100.0f),
    dañoLocal(0.0f),
    llevaArma(false),
    armadura(0)
{}

std::string ParteCuerpo::getNombre() const { return nombre; }

float ParteCuerpo::getIntegridad() const { return integridad; }

bool ParteCuerpo::getLlevaArma() const { return llevaArma; }

float ParteCuerpo::getDañoLocal() const { return dañoLocal; }

Armadura* ParteCuerpo::getArmadura() const { return armadura; }

void ParteCuerpo::recibirDaño(float daño){
    float dañoRecibido = daño;
    if (armadura) {
        dañoRecibido = armadura->calcularDaño(daño);
        armadura->reducirDurabilidad(daño * 0.1f); 
    }
    integridad -= dañoRecibido;
    if (integridad < 0) integridad = 0;
    dañoLocal += dañoRecibido;
}

void ParteCuerpo::equiparArmadura(Armadura* a){
    this->armadura = a;
}

void ParteCuerpo::mostrarEstado() const{
    std::cout << "Parte del Cuerpo: " << nombre << std::endl;
    std::cout << "Integridad: " << integridad << std::endl;
    std::cout << "Daño Local: " << dañoLocal << std::endl;
    std::cout << "Lleva Arma: " << (llevaArma ? "Sí" : "No") << std::endl;
    if (armadura) {
        std::cout << "Armadura equipada. Durabilidad: " << armadura->getDurabilidad() << std::endl;
    } else {
        std::cout << "No hay armadura equipada." << std::endl;
    }
}

ParteCuerpo::~ParteCuerpo() {}