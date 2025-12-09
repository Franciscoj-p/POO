#include "../include/hacha.h"

Hacha::Hacha(int dur, int dmg, float p, float prec)
    : Arma(dur, dmg, p, prec)
{
    dañoAtaque += 30;
    durabilidad += 20;
    peso = 50.0;
    precision = 40.0;  
}

std::string Hacha::describir() const {
    return "Un Hacha pesada y poderosa, dificil de manejar";
}
