#include "../include/doctor.h"
#include <iostream>

Doctor::Doctor() : nombre(""), especialidad(""), cedula(""), correo(""), titulo("") {}

Doctor::Doctor(const std::string& nombre,
               const std::string& especialidad,
               const std::string& cedula,
               const std::string& correo,
               const std::string& titulo)
    : nombre(nombre), especialidad(especialidad), cedula(cedula), correo(correo), titulo(titulo) {}

std::string Doctor::getNombre() const { return nombre; }
std::string Doctor::getCedula() const { return cedula; }
std::string Doctor::getEspecialidad() const { return especialidad; }
std::string Doctor::getCorreo() const { return correo; }
std::string Doctor::getTitulo() const { return titulo; }

void Doctor::verInfo() const {
    std::cout << "---- Datos del Médico ----" << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Cédula: " << cedula << std::endl;
    std::cout << "Correo: " << correo << std::endl;
    std::cout << "Título: " << titulo << std::endl;
    std::cout << "Especialidad: " << especialidad << std::endl;
    std::cout << "---------------------------" << std::endl;
}
