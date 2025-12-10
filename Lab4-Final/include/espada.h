#ifndef ESPADA_H
#define ESPADA_H

#include "arma.h"
#include <string>
/**
 * @file arma.h
 * @brief Declaración de la clase Espada, derivada de Arma.
 *
 * @author Grupo 6:
 *   - Camilo Andrés Alarcón Villareal 202519844-3744
 *   - Santiago Arce Núñez 202516846-3744
 *   - Francisco Popo 202515537-3744
 *   - Alejandro Martínez Ruiz 202510009-3744
 */
class Espada : public Arma {
public:
    Espada();
    //método abstracto
    virtual std::string describir() const;
};

#endif
