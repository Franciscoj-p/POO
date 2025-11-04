#include "../include/paciente.h"
#include <iostream>

Paciente::Paciente() : edad(0), nombre(""), cedula(""), telefono(""), correo(""), motivoConsulta("") {}//constructor por defecto

Paciente::Paciente(int edad,
                   const std::string& nombre,
                   const std::string& cedula,
                   const std::string& telefono,
                   const std::string& correo,
                   const std::string& motivoConsulta)
    : edad(edad),
      nombre(nombre),
      cedula(cedula),
      telefono(telefono),
      correo(correo),
      motivoConsulta(motivoConsulta) {}

std::string Paciente::getNombre() const { return nombre; }
std::string Paciente::getCedula() const { return cedula; }
std::string Paciente::getTelefono() const { return telefono; }
std::string Paciente::getCorreo() const { return correo; }
int Paciente::getEdad() const { return edad; }
std::string Paciente::getMotivo() const { return motivoConsulta; }

void Paciente::verInfo() const {
    std::cout << "---- Datos del Paciente ----" << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Cédula: " << cedula << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Teléfono: " << telefono << std::endl;
    std::cout << "Correo: " << correo << std::endl;
    std::cout << "Motivo de consulta: " << motivoConsulta << std::endl;
    std::cout << "-----------------------------" << std::endl;
}
