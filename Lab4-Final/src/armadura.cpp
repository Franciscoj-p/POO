#include "../include/armadura.h"
#include <iostream>
/**
 * Constructor de la clase Armadura, inicia los atributos durabilidad y dañoAbs en 0.0f por defecto, cada tipo de armadura los inicializa con sus propios valores.
 */
Armadura::Armadura()
    : durabilidad(0.0f),
      dañoAbs(0.0f)
{}

Armadura::~Armadura() {}

float Armadura::getDurabilidad() const { return durabilidad; }

float Armadura::getDañoAbs() const { return dañoAbs; }

void Armadura::reducirDurabilidad(float cantidad) { 
    durabilidad -= cantidad; 
    if (durabilidad < 0) durabilidad = 0;
}

std::string Armadura::describir() const { return ""; }

float Armadura::calcularDaño(float daño) const { 
     if (durabilidad <= 0)
        return daño;
        
    return daño * (1.0f - dañoAbs);
}