#include "../include/cita.h"
#include <iostream>

Cita::Cita(const Doctor& doctor, const Paciente& paciente, const Fecha& fecha)
    : doctor(doctor), paciente(paciente), fecha(fecha) {}

Doctor Cita::getDoctor() const {
    return doctor;
}

Paciente Cita::getPaciente() const {
    return paciente;
}

Fecha Cita::getFecha() const {
    return fecha;
}

void Cita::reporte() const {
    std::cout << "---- Detalles de la Cita ----" << std::endl;
    std::cout << "Doctor: " << doctor.getNombre() << std::endl;
    std::cout << "Paciente: " << paciente.getNombre() << std::endl;
    std::cout << "Fecha: " << fecha.dia << "/" << fecha.mes << "/" << fecha.año
              << " a las " << fecha.hora << ":00" << std::endl;
    std::cout << "-----------------------------" << std::endl;
}
