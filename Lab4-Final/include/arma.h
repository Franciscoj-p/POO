#ifndef ARMA_H
#define ARMA_H

#include <string>
/**
 * @file arma.h
 * @brief Declaración de la clase base Arma y sus atributos y métodos principales.
 * @brief aporta valores como daño base, precisión, peso y durabilidad. El SistemaDeBatalla usa esos valores en sus cálculos.
 *
 *
 * @param durabilidad tanto aguanta antes de romperse
 * @param dañoAtaque daño del golpe
 * @param peso qué tan pesada es en kg
 * @param precision probabilidad base de acertar, porcentaje
 * 
 */

class Arma {
protected:
    int durabilidad;
    int dañoAtaque;
    float peso;
    float precision;

public:
    Arma(int dur, int dmg, float p, float prec);
    // Destructor virtual
    virtual ~Arma();

    // Métodos getters simples
    int getDurabilidad() const;
    int getDañoAtaque() const;
    float getPeso() const;
    float getPrecision() const;
    virtual std::string describir() const;
};

#endif
