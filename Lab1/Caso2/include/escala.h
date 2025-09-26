#ifndef ESCALA_H
#define ESCALA_H

class Escala {
private:
    double minimo;
    double maximo;
public:
    Escala(double min, double max);
    bool validar(double valor);
};

#endif
