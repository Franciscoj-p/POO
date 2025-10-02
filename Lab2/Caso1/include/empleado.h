#ifndef EMPLEADO_H
#define EMPlEADO_H
#include "fecha.h"
#include <string>

class Empleado {
private:
    std::string nombre;
    std::string id;
    Fecha antiguedad;
    Fecha fechaNacimiento;
    int horasTrabajadas;
public:
    Empleado(const std::string& nombre, const std::string& id, Fecha fechaNacimiento, Fecha antiguedad);
    void registrarHoras();
    int calcularSalario(int valorHora);
    int calcularEdad();
    int calcularAntiguedad();

};
#endif