#ifndef PARTECUERPO_H
#define PARTECUERPO_H

#include "arma.h"
#include "armadura.h"
#include <string>
/**
 * @file parteCuerpo.h
 * @brief Declaración de la clase base ParteCuerpo y sus atributos y métodos principales.
 * @brief Representa una parte del cuerpo de una entidad, como cabeza, torso, brazos o piernas.
 * @param nombre nombre de la parte del cuerpo
 * @param integridad cantidad de vida o salud de la parte del cuerpo
 * @param dañoLocal multiplicador de daño recibido en esa parte
 * @param llevaArma indica si la parte del cuerpo tiene un arma equipada
 * @param arma puntero al arma equipada en esa parte del cuerpo
 * @param armadura puntero a la armadura equipada en esa parte del cuerpo
 * 
 * Proporciona métodos para recibir daño, equipar armas y armaduras, y mostrar el estado de la parte del cuerpo.
 * cabe destacar que cada parte tiene integridad independiendiente de la vida de la entidad completa.
 * cada parte puede ser destruida individualmente. Las partes criticas (como la cabeza o el torso) al ser destruidas matan a la entidad completa.
 * 
 **/
class ParteCuerpo {
    protected:
        std::string nombre;
        float integridad;
        float dañoLocal;
        bool llevaArma;
        Arma* arma;
        Armadura* armadura;
        float modificadorPrecision;
        bool defendida;
        
    public: 
        ParteCuerpo();
        std::string getNombre() const;
        float getIntegridad() const;
        float getDañoLocal() const;
        const Armadura* getArmadura() const;
        const Arma* getArma() const;
        bool getLlevaArma() const;
        float recibirDaño(float daño);
        void equiparArmadura(Armadura* a);
        virtual void mostrarEstado() const;
        virtual void equiparArma(Arma* a);
        bool estaFuncional() const;
        virtual ~ParteCuerpo();
        float getModificadorPrecision() const;
        void defender();
        void resetDefensa();
        bool estaDefendida() const;
};
#endif
