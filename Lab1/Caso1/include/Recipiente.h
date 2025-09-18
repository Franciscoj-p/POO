#ifndef RECIPIENTE_H
#define RECIPIENTE_H

class Recipiente {
private:
    double radio;
    double alturaMax;
public:
    Recipiente(double r, double H);
    double getRadio();
    double getAlturaMax();
    double calcularVolumenTotal();
};

#endif
