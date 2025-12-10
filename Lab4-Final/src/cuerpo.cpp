#include "../include/cuerpo.h"
#include <iostream>

Cuerpo::Cuerpo() {
    // El cuerpo crea sus partes
    partes.push_back(new Cabeza());
    partes.push_back(new Torso());
    partes.push_back(new Brazos());
    partes.push_back(new Piernas());
}

Cuerpo::~Cuerpo() {
    // El cuerpo destruye sus partes
    for (size_t i = 0; i < partes.size(); ++i) {
        delete partes[i];
    }
    partes.clear();
}

ParteCuerpo* Cuerpo::obtenerParte(const std::string& nombre) {
    for (size_t i = 0; i < partes.size(); ++i) {
        if (partes[i]->getNombre() == nombre) {
            return partes[i];
        }
    }
    return 0;
}

float Cuerpo::recibirDañoEnParte(const std::string& nombreParte, float cantidad) {
    ParteCuerpo* parte = obtenerParte(nombreParte);
    if (parte) {    
       return parte->recibirDaño(cantidad);
    }
        return 0.0f;
}

void Cuerpo::mostrarEstado() const {
    std::cout << "=== Estado del Cuerpo ===" << std::endl;
    for (size_t i = 0; i < partes.size(); ++i) {
        partes[i]->mostrarEstado();
        std::cout << "------------------------" << std::endl;
    }
}

void Cuerpo::equiparArmadura(Armadura* a) {
    for (size_t i = 0; i < partes.size(); ++i) {
        partes[i]->equiparArmadura(a);
    }
}

void Cuerpo::equiparArma(Arma* arma) {
    for (size_t i = 0; i < partes.size(); ++i) {
        if (partes[i]->getLlevaArma()) {
            partes[i]->equiparArma(arma);
        }
    }
}

bool Cuerpo::cabezaEstaFuncional() const {
    return partes[0]->estaFuncional();
}

bool Cuerpo::torsoEstaFuncional() const {
    return partes[1]->estaFuncional();
}

bool Cuerpo::brazosEstaFuncional() const {
    return partes[2]->estaFuncional();
}

bool Cuerpo::piernasEstaFuncional() const {
    return partes[3]->estaFuncional();
}