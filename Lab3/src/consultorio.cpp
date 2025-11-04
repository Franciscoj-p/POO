#include "../include/consultorio.h"
#include <iostream>

Consultorio::Consultorio(const std::string& nombre) {
    this->nombre = nombre;
}

void Consultorio::agregarDoctor(const Doctor& doc) {
    doctores.push_back(doc);
}

void Consultorio::verDoctores() const {
    std::cout << "Consultorio: " << nombre << std::endl;
    std::cout << "Lista de doctores:" << std::endl;

    if (doctores.empty()) {
        std::cout << "No hay doctores registrados." << std::endl;
        return;
    }

    for (size_t i = 0; i < doctores.size(); ++i) {
        std::cout << i + 1 << ". " << doctores[i].getNombre() << std::endl;
    }
}
