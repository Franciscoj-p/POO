#include "../include/armadura.h"

Armadura::Armadura()
    : durabilidad(100.0f),
      dañoAbs(0.0f),
      reduccionMovimiento(0.0f)
{}
Armadura::~Armadura() {}
float Armadura::getDurabilidad() const { return durabilidad; }
float Armadura::getDañoAbs() const { return dañoAbs; }
float Armadura::getReduccionMovimiento() const { return reduccionMovimiento; }
void Armadura::reducirDurabilidad(float cantidad) { 
    durabilidad -= cantidad; 
    if (durabilidad < 0) durabilidad = 0;
}
std::string Armadura::describir() const { return ""; }
float Armadura::calcularDaño(float daño) const { return daño * (1.0f - dañoAbs); }