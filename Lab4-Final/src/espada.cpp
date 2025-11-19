#include "../include/espada.h"

Espada::Espada(int dur, int dmg, float p, float prec)
    : Arma(dur, dmg, p, prec)
{
    dañoAtaque += 10;   // Ajuste propio de Espada, se hace asi gracias a protected
    durabilidad += 10;
    peso = 30.0;
    precision = 60.0;  
}

std::string Espada::describir() const {
    return "Espada: arma ligera y afilada, moderada precision y daño considerable.";
}
