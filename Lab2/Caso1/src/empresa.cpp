#include "../include/empresa.h"
#include "../include/fecha.h"
#include <string>

Empresa::Empresa(const std::string& nombre, int valorHora){
    this->nombre = nombre;
    this->valorHora = valorHora;
    this->empleados = std::vector<Empleado>();
}

int Empresa::calcularNomina() const{
    int nomina = 0;
    for(size_t i = 0; i < empleados.size(); ++i){
        nomina += empleados[i].calcularSalario(this->valorHora);
    };
    return nomina;    
}

void Empresa::registrarEmpleado(const Empleado& empleado){
    this->empleados.push_back(empleado);
}

int Empresa::getValorHora() const {
    return this->valorHora;
}

Empleado Empresa::calcularEmpleadoViejo() const {
    Empleado empleadoViejo = empleados[0];

    Fecha fechaActual;
    fechaActual.dia = 7;
    fechaActual.mes = 10;
    fechaActual.año = 2025;
    fechaActual.hora = 0;

    for (size_t i = 1; i < empleados.size(); ++i) {
        if (empleados[i].calcularAntiguedad(fechaActual) >
            empleadoViejo.calcularAntiguedad(fechaActual)) {
            empleadoViejo = empleados[i];
        }
    }

    return empleadoViejo;
}

const std::vector<Empleado>& Empresa::getEmpleados() const {
    return this->empleados;
}