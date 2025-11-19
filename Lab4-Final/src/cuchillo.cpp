#include "../include/cuchillo.h"

Cuchillo::Cuchillo(int dur, int dmg, float p, float prec)
    : Arma(dur, dmg, p, prec)
{
    dañoAtaque -= 30;
    durabilidad -= 20;
    peso = 10.0;
    precision = 90.0;  
}

std::string Cuchillo::describir() const {
    return "Cuchillo confiable, ligero y preciso";
}
