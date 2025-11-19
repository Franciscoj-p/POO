#include "../include/arma.h"

Arma::Arma(int dur, int dmg, float p, float prec)
    : durabilidad(dur), dañoAtaque(dmg), peso(p), precision(prec) {}
// Destructor virtual
Arma::~Arma() {}    