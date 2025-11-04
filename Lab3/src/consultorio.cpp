#include "../include/consultorio.h"
#include <iostream>

Consultorio::Consultorio() : nombre("Consultorio sin nombre"), agenda() {} //constructor por defecto

Consultorio::Consultorio(const std::string& nombre) : nombre(nombre), agenda() {}

void Consultorio::agregarDoctor(const Doctor& doc) {
    doctores.push_back(doc);
    std::cout << "Doctor agregado: " << doc.getNombre() << std::endl;
}

void Consultorio::verDoctores() const {
    std::cout << "\nConsultorio: " << nombre << std::endl;
    std::cout << "--- Lista de doctores ---" << std::endl;

    if (doctores.empty()) {
        std::cout << "No hay doctores registrados." << std::endl;
        return;
    }

    for (size_t i = 0; i < doctores.size(); ++i) {
        std::cout << i + 1 << ". ";
        doctores[i].verInfo();
    }
}

std::vector<Doctor> Consultorio::getDoctores() const {
    return doctores;
}

void Consultorio::registrarPaciente(const Paciente& paciente) {
    pacientes.push_back(paciente);
    std::cout << "Paciente registrado: " << paciente.getNombre() << std::endl;
}

void Consultorio::verPacientes() const {
    std::cout << "\n--- Lista de Pacientes ---" << std::endl;

    if (pacientes.empty()) {
        std::cout << "No hay pacientes registrados." << std::endl;
        return;
    }

    for (size_t i = 0; i < pacientes.size(); ++i) {
        pacientes[i].verInfo();
    }
}

void Consultorio::agendarCita(const Cita& cita) {
    if (agenda.registrarCita(cita)) {
        std::cout << "Cita agendada exitosamente." << std::endl;
    } else {
        std::cout << "No se pudo agendar la cita." << std::endl;
    }
}

void Consultorio::verAgenda() const {
    std::cout << "\n--- Agenda del consultorio ---" << std::endl;
    agenda.mostrarCitas();
}
