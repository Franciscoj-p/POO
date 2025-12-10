#ifndef ARMA_H
#define ARMA_H

#include <string>
/**
 * @file arma.h
 * @brief Declaración de la clase base Arma y sus atributos y métodos principales.
 * @brief aporta valores como daño base, precisión, peso y durabilidad. El SistemaDeBatalla usa esos valores en sus cálculos.
 * para acotar el proyecto, las armas no se degradan con el uso, ni el peso influye en nada
 *
 * 
 * 
 * @param dañoAtaque daño del golpe
 * @param precision probabilidad base de acertar, porcentaje
 * 
 */

class Arma {
protected:
    float dañoAtaque;
    float precision;

public:
    Arma();
    virtual ~Arma();
    float getDañoAtaque() const;
    float getPrecision() const;
    virtual std::string describir() const;
};

#endif
