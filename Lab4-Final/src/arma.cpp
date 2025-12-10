#include "../include/arma.h"
#include <iostream>
/**
 * Constructor de la clase Arma, inicia los atributos dañoAtaque y precision en 0.0f por defecto, cada tipo de arma los inicializa con sus propios valores.
 */
Arma::Arma()
   :dañoAtaque(0.0f), 
    precision(0.0f)
    {}
// Destructor virtual
Arma::~Arma() {}    
float Arma::getDañoAtaque() const { return dañoAtaque; }
float Arma::getPrecision() const { return precision; }

// Método virtual
std::string Arma::describir() const { return ""; }