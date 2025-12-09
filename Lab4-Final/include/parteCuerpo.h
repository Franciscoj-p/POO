#ifndef PARTECUERPO_H
#define PARTECUERPO_H

#include "armadura.h"
#include <string>

class ParteCuerpo {
    protected:
        std::string nombre;
        float integridad;
        float dañoLocal;
        bool llevaArma;
        Armadura* armadura;
    public:
        ParteCuerpo();
        std::string getNombre() const;
        float getIntegridad() const;
        bool getLlevaArma() const;
        float getDañoLocal() const;
        Armadura* getArmadura() const;
        void recibirDaño(float daño);
        void equiparArmadura(Armadura* a);
        void mostrarEstado() const;
        virtual ~ParteCuerpo();
};
#endif
