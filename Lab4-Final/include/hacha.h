#ifndef HACHA_H
#define HACHA_H

#include "arma.h"
#include <string>

class Hacha : public Arma {
public:
    Hacha(int dur, int dmg, float p, float prec);
    virtual std::string describir() const;
};

#endif
