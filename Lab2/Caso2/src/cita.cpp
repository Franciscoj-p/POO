#include "../include/cita.h"
#include <iostream>

Cita::Cita(Doctor doctor, Paciente paciente, Fecha f) {
    this->doctor = doctor;
    this->paciente = paciente;
    this->fecha = f;
}

Cita::Cita() {
    // constructor por defecto vacío
}

void Cita::reportar() {
    std::cout << "---- Detalles de la Cita ----" << std::endl;
    std::cout << "Doctor: " << doctor.getNombre() << std::endl;
    std::cout << "Paciente: " << paciente.getNombre() << std::endl;
    std::cout << "Fecha: " << fecha.dia << "/" << fecha.mes << "/" << fecha.año 
              << " a las " << fecha.hora << ":00" << std::endl;
}
