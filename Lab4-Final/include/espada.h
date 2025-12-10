#ifndef ESPADA_H
#define ESPADA_H

#include "arma.h"
#include <string>
/**
 * @file arma.h
 * @brief Declaración de la clase Espada, derivada de Arma.
 *
 */
class Espada : public Arma {
public:
    Espada();
    //método abstracto
    virtual std::string describir() const;
};

#endif
