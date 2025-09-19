#ifndef RECIPIENTE_H
#define RECIPIENTE_H
#include <vector>

class Recipiente {
private:
    double radio;
    double alturaLlenado;
    double alturaMax;
public:
    Recipiente(double r, double h, double H);
    double getRadio();
    double getAlturaMax();
    double getAlturaLlenado();
    std::vector<double> calcularVolumenes();
};

#endif
