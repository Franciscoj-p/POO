#include "../include/arco.h"

Arco::Arco(int dur, int dmg, float p, float prec)
    : Arma(dur, dmg, p, prec)
{
    dañoAtaque += 10;
    peso = 20.0;
    precision = prec;  
}

std::string Arco::describir() const {
    return "Una arco ligero, su precision depende de la habilidad del portador.";
}
