#include "../include/arma.h"

Arma::Arma(int dur, int dmg, float p, float prec)
    : durabilidad(dur), dañoAtaque(dmg), peso(p), precision(prec) {}
// Destructor virtual
Arma::~Arma() {}    
int Arma::getDurabilidad() const { return durabilidad; }
int Arma::getDañoAtaque() const { return dañoAtaque; }
float Arma::getPeso() const { return peso; }
float Arma::getPrecision() const { return precision; }

// Método virtual
std::string Arma::describir() const { return ""; }