#ifndef CUCHILLO_H
#define CUCHILLO_H

#include "arma.h"
#include <string>

class Cuchillo : public Arma {
    public:
        Cuchillo();
        virtual std::string describir() const;
};

#endif
