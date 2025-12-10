#include "../include/turno.h"
#include <iostream>

Turno::Turno(){
    entidadAtacante = 0;
    entidadReceptora = 0;
}

Turno::~Turno(){}

void Turno::setAtacante(Entidad* atacante){
    entidadAtacante = atacante;
}

void Turno::setReceptora(Entidad* receptora){
    entidadReceptora = receptora;
}

void Turno::setAccionAtacante(const std::string& accion){
    accionAtacante = accion;
}

void Turno::setAccionReceptora(const std::string& accion){
    accionReceptora = accion;
} 

Entidad* Turno::getEntidadAtacante() const{
    return entidadAtacante;
}

Entidad* Turno::getEntidadReceptora() const{
    return entidadReceptora;
}

std::string Turno::getAccionAtacante() const{
    return accionAtacante;
}

std::string Turno::getAccionReceptora() const{
    return accionReceptora;
}

void Turno::setObjetivoAtacante(const std::string& objetivo){
    objetivoAtacante = objetivo;
}

void Turno::setObjetivoReceptora(const std::string& objetivo){
    objetivoReceptora = objetivo;
}

std::string Turno::getObjetivoAtacante() const{
    return objetivoAtacante;
}

std::string Turno::getObjetivoReceptora() const{
    return objetivoReceptora;
}