#ifndef ENTIDAD_H
#define ENTIDAD_H

#include <string>
#include "cuerpo.h"
/**
 * @file entidad.h
 * @brief Declaración de la clase base Entidad y sus atributos y métodos principales.
 * @brief Representa a un ser vivo con un cuerpo, vida, armas y armaduras.
 * @param cuerpo estructura que contiene las partes del cuerpo
 * @param vida cantidad de vida actual
 * @param vidaMaxima cantidad de vida máxima
 * @param viva indica si la entidad esta viva o muerta
 * @param arma arma equipada a nivel de entidad 
 * @param armadura armadura equipada a nivel de entidad 
 * 
 * 
 **/ 
class Entidad {
private:
    Cuerpo* cuerpo;
    float vida;
    float vidaMaxima;
    bool viva;
    Arma* arma;
    Armadura* armadura;

public:
    Entidad();
    ~Entidad();
    void recibirDañoEn(const std::string& nombreParte, float daño);
    void equiparArma(Arma* a);
    void equiparArmadura(Armadura* a);
    bool estaViva() const;
    void mostrarEstado() const;
};

#endif
