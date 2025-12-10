#ifndef CUERPO_H
#define CUERPO_H

#include <vector>
#include <string>

#include "cabeza.h"
#include "torso.h"
#include "brazos.h"
#include "piernas.h"

/**
 * @file cuerpo.h
 * @brief Declaración de la clase Cuerpo y sus atributos y métodos principales.
 * @brief Representa el conjunto de partes del cuerpo de una entidad.
 * @param partes vector que contiene las diferentes partes del cuerpo.
 * 
 * Proporciona métodos para gestionar las partes del cuerpo, como recibir daño, equipar armas y armaduras, y mostrar el estado de las partes.
 * 
 **/

class Cuerpo {
private:
    std::vector<ParteCuerpo*> partes;
public:
    Cuerpo();
    ~Cuerpo();

    ParteCuerpo* obtenerParte(const std::string& nombre);
    float recibirDañoEnParte(const std::string& nombreParte, float cantidad);
    void equiparArmadura(Armadura* armadura);
    void equiparArma(Arma* arma);
    void mostrarEstado() const;
    bool cabezaEstaFuncional() const;
    bool torsoEstaFuncional() const;
    bool brazosEstaFuncional() const;
    bool piernasEstaFuncional() const;
};

#endif
