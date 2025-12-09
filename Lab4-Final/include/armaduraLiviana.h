#ifndef ARMADURALIVIANA_H
#define ARMADURALIVIANA_H

#include "armadura.h"
#include <string>

class ArmaduraLiviana : public Armadura {
    public:
        ArmaduraLiviana();
        virtual std::string describir() const;
};

#endif
