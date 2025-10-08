#include "../include/paciente.h"
#include <iostream>

Paciente::Paciente() {
    this->edad = 0;
    this->nombre = "";
    this->id = "";
    this->telefono = "";
    this->correo = "";
    this->motivoConsulta = "";
}

Paciente::Paciente(int edad, 
                   const std::string& nombre, 
                   const std::string& id, 
                   const std::string& telefono, 
                   const std::string& correo, 
                   const std::string& motivoConsulta) {
    this->edad = edad;
    this->nombre = nombre;
    this->id = id;
    this->telefono = telefono;
    this->correo = correo;
    this->motivoConsulta = motivoConsulta;
}

void Paciente::verInfo() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Edad: " << edad << " años" << std::endl;
    std::cout << "Telefono: " << telefono << std::endl;
    std::cout << "Correo: " << correo << std::endl;
    std::cout << "Motivo de consulta: " << motivoConsulta << std::endl;
}

std::string Paciente::getNombre() const {
    return nombre;
}
