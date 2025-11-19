#ifndef CUCHILLO_H
#define CUCHILLO_H

#include "arma.h"
#include <string>

class Cuchillo : public Arma {
public:
    Cuchillo(int dur, int dmg, float p, float prec);
    virtual std::string describir() const;
};

#endif
