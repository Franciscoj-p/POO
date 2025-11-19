#ifndef ARMA_H
#define ARMA_H

#include <string>
/**
 * @file arma.h
 * @brief Declaración de la clase base Arma y sus atributos y métodos principales.
 * @brief aporta valores como daño base, precisión, peso y durabilidad. El SistemaDeBatalla usa esos valores en sus cálculos.
 *
 * @author Grupo 6:
 *   - Camilo Andrés Alarcón Villareal 202519844-3744
 *   - Santiago Arce Núñez 202516846-3744
 *   - Francisco Popo 202515537-3744
 *   - Alejandro Martínez Ruiz 202510009-3744
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
    int getDurabilidad() const { return durabilidad; }
    int getDañoAtaque() const { return dañoAtaque; }
    float getPeso() const { return peso; }
    float getPrecision() const { return precision; }

    // Método virtual
    virtual std::string describir() const = 0;
};

#endif
