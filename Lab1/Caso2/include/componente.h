#ifndef COMPONENTE_H
#define COMPONENTE_H
#include <vector>
#include <string>

class Componente {
private:
        std::string nombre;
        double peso;
        double nota;
public:
    Componente(std::string nombre, double peso, double nota);
    std::string getNombre();
    double getPeso();
    double getNota();
    void setNota(double nota);
    double calcularNotaPonderada() const;
};

#endif