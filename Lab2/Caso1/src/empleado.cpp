#include "../include/empleado.h"
#include "../include/fecha.h"
#include <string>

Empleado::Empleado(const std::string& nombre, const std::string& id, Fecha fechaNacimiento, Fecha antiguedad){
    this->nombre = nombre;
    this->id = id;
    this->fechaNacimiento = fechaNacimiento;
    this->antiguedad = antiguedad;
    this->horasTrabajadas = 0;
};

void Empleado::registrarHoras(int horas){
    this->horasTrabajadas += horas;
};

int Empleado::calcularSalario(int valorHora)const{
    return this->horasTrabajadas * valorHora;
};

int Empleado::calcularEdad(const Fecha& actual)const{
    return actual.diferenciaAños(this->fechaNacimiento, actual);

};

int Empleado::calcularAntiguedad(const Fecha& actual)const{
    return actual.diferenciaAños(this->antiguedad, actual);
};