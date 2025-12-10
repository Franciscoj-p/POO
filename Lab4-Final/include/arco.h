#ifndef ARCO_H
#define ARCO_H

#include "arma.h"
#include <string>

class Arco : public Arma {
public:
    Arco();
    virtual std::string describir() const;
};

#endif
