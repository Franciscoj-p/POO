#ifndef ARCO_H
#define ARCO_H

#include "arma.h"
#include <string>

class Arco : public Arma {
public:
    Arco(int dur, int dmg, float p, float prec);
    virtual std::string describir() const;
};

#endif
