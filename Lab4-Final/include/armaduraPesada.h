#ifndef ARMADURAPESADA_H
#define ARMADURAPESADA_H

#include "armadura.h"
#include <string>

class ArmaduraPesada : public Armadura {
public:
    ArmaduraPesada();
    virtual std::string describir() const;
};

#endif
