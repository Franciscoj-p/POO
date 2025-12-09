#ifndef ARMADURANORMAL_H
#define ARMADURANORMAL_H

#include "armadura.h"
#include <string>

class ArmaduraNormal : public Armadura {
    public:
        ArmaduraNormal();
        virtual std::string describir() const;
};

#endif