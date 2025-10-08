#include "../include/empleado.h"
#include "../include/fecha.h"
#include <string>

Empleado::Empleado(const std::string& nombre, const std::string& id, Fecha fechaNacimiento, Fecha antiguedad){
    this->nombre = nombre;
    this->id = id;
    this->fechaNacimiento = fechaNacimiento;
    this->antiguedad = antiguedad;
    this->horasTrabajadas = 0;
}

Empleado::Empleado() {
    this->nombre = "";
    this->id = "";
    this->fechaNacimiento.dia = 0;
    this->fechaNacimiento.mes = 0;
    this->fechaNacimiento.año = 0;
    this->fechaNacimiento.hora = 0;

    this->antiguedad.dia = 0;
    this->antiguedad.mes = 0;
    this->antiguedad.año = 0;
    this->antiguedad.hora = 0;

    this->horasTrabajadas = 0;
}


void Empleado::registrarHoras(int horas){
    this->horasTrabajadas += horas;
}

int Empleado::calcularSalario(int valorHora)const{
    return this->horasTrabajadas * valorHora;
}

int Empleado::calcularEdad(const Fecha& actual)const{
    return actual.diferenciaAños(this->fechaNacimiento, actual);

}

int Empleado::calcularAntiguedad(const Fecha& actual)const{
    return actual.diferenciaAños(this->antiguedad, actual);
}

std::string Empleado::getNombre() const {
    return this->nombre;
}

std::string Empleado::getId() const {
    return this->id;
}