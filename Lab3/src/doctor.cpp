#include "../include/doctor.h"
#include <iostream>

Doctor::Doctor() {
    this->nombre = "";
    this->especialidad = "";
    this->id = "";
}

Doctor::Doctor(const std::string& nombre, const std::string& especialidad, const std::string& id) {
    this->nombre = nombre;
    this->especialidad = especialidad;
    this->id = id;
}

void Doctor::verInfo() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Especialidad: " << especialidad << std::endl;
    std::cout << "ID: " << id << std::endl;
}

std::string Doctor::getNombre() const {
    return nombre;
}
