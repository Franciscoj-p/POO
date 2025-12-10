#ifndef ARMADURA_H
#define ARMADURA_H
#include <string>
/**
 * @file armadura.h
 * @brief Declaración de la clase base Armadura y sus atributos y métodos principales.
 * @brief Aporta valores como defensa base, peso y durabilidad. El SistemaDeBatalla usa esos valores en sus cálculos.
 * @param durabilidad tanto aguanta antes de romperse
 * @param dañoAbs porcentaje de daño que puede absorber
 * para acotar el proyecto, no se implementan efectos por el peso de la armadura
 * 
 * la armadura reduce el daño recibido según su porcentaje de absorción hasta que su durabilidad llega a 0
 * 
 * 
 **/       
class Armadura {
protected:
    float durabilidad;
    float dañoAbs;

public:
    Armadura();
    virtual ~Armadura();    
    float getDurabilidad() const;
    float getDañoAbs() const;
    void reducirDurabilidad(float cantidad);
    virtual std::string describir() const;
    float calcularDaño(float daño) const;

};
#endif