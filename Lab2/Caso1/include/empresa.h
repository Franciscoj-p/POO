#ifndef EMPRESA_H
#define EMPRESA_H
#include <string>
#include <vector>
#include "empleado.h"

class Empresa {
private:
    std::string nombre;
    std::vector<Empleado> empleados;
    int valorHora;
public:
    Empresa(const std::string& nombre, int valorHora);
    int calcularNomina() const;
    void registrarEmpleado(const Empleado&);
    int getValorHora() const;
    Empleado calcularEmpleadoViejo() const;
    const std::vector<Empleado>& getEmpleados() const;

};
#endif 