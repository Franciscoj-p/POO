#ifndef ARMADURA_H
#define ARMADURA_H
#include <string>
/**
 * @file armadura.h
 * @brief Declaración de la clase base Armadura y sus atributos y métodos principales.
 * @brief Aporta valores como defensa base, peso y durabilidad. El SistemaDeBatalla usa esos valores en sus cálculos.
 * @param durabilidad tanto aguanta antes de romperse
 * @param dañoAbs porcentaje de daño que puede absorber
 * @param reduccionMovimiento cuánto reduce la velocidad del portador.
 **/       
class Armadura {
protected:
    float durabilidad;
    float dañoAbs;
    float reduccionMovimiento;

public:
    Armadura();
    // Destructor virtual
    virtual ~Armadura();    
    // Métodos getters simples
    float getDurabilidad() const;
    float getDañoAbs() const;
    float getReduccionMovimiento() const;
    void reducirDurabilidad(float cantidad);
    virtual std::string describir() const;
    float calcularDaño(float daño) const;//devuelve el daño reducido según la defensa de la armadura

};
#endif