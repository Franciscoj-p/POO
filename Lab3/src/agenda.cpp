#include "agenda.h"
#include <iostream>

Agenda::Agenda() {}

bool Agenda::registrarCita(const Cita& nuevaCita) {
    int hora = nuevaCita.getFecha().hora;

    // Verificar que esté dentro del horario laboral
    bool dentroHorario = (hora >= 7 && hora <= 11) || (hora >= 13 && hora <= 16);
    if (!dentroHorario) {
        std::cout << "No se pueden registrar citas fuera del horario laboral (7-11 y 13-16).\n";
        return false;
    }

    // Verificar conflicto con otras citas
    for (size_t i = 0; i < catalogoDisponibilidad.size(); ++i) {
        const Cita& cita = catalogoDisponibilidad[i];
        if (cita.getDoctor().getCedula() == nuevaCita.getDoctor().getCedula() &&
            cita.getFecha().compararFechas(nuevaCita.getFecha())) {
            std::cout << "El doctor ya tiene una cita en esa fecha y hora.\n";
            return false;
        }
    }

    catalogoDisponibilidad.push_back(nuevaCita);
    std::cout << "Cita registrada correctamente.\n";
    return true;
}

bool Agenda::cancelarCita(const Cita& citaACancelar) {
    for (std::vector<Cita>::iterator it = catalogoDisponibilidad.begin();
         it != catalogoDisponibilidad.end(); ++it) {
        if (it->getDoctor().getCedula() == citaACancelar.getDoctor().getCedula() &&
            it->getFecha().compararFechas(citaACancelar.getFecha()) &&
            it->getPaciente().getCedula() == citaACancelar.getPaciente().getCedula()) {
            catalogoDisponibilidad.erase(it);
            std::cout << "Cita cancelada correctamente.\n";
            return true;
        }
    }
    std::cout << "No se encontró la cita a cancelar.\n";
    return false;
}

void Agenda::consultarDisponibilidad(const Doctor& doctor, const Fecha& fecha) const {
    int horas[] = {7, 8, 9, 10, 11, 13, 14, 15, 16};
    std::vector<int> horasDisponibles(horas, horas + 9);

    for (size_t i = 0; i < catalogoDisponibilidad.size(); ++i) {
        const Cita& cita = catalogoDisponibilidad[i];
        if (cita.getDoctor().getCedula() == doctor.getCedula() &&
            cita.getFecha().dia == fecha.dia &&
            cita.getFecha().mes == fecha.mes &&
            cita.getFecha().año == fecha.año) {
            int horaOcupada = cita.getFecha().hora;
            for (size_t j = 0; j < horasDisponibles.size(); ++j) {
                if (horasDisponibles[j] == horaOcupada) {
                    horasDisponibles.erase(horasDisponibles.begin() + j);
                    break;
                }
            }
        }
    }

    if (horasDisponibles.empty()) {
        std::cout << "El doctor no tiene horas disponibles ese día.\n";
    } else {
        std::cout << "Horas disponibles para el doctor " << doctor.getNombre()
                  << " el " << fecha.dia << "/" << fecha.mes << "/" << fecha.año << ":\n";
        for (size_t i = 0; i < horasDisponibles.size(); ++i)
            std::cout << horasDisponibles[i] << ":00\n";
    }
}

void Agenda::mostrarCitas() const {
    if (catalogoDisponibilidad.empty()) {
        std::cout << "No hay citas registradas.\n";
        return;
    }

    std::cout << "\n--- Citas registradas ---\n";
    for (std::vector<Cita>::const_iterator it = catalogoDisponibilidad.begin();
         it != catalogoDisponibilidad.end(); ++it) {
        it->reporte();
    }
}

void Agenda::mostrarCitasPorDoctor(const Doctor& doctor) const {
    bool encontrado = false;
    for (std::vector<Cita>::const_iterator it = catalogoDisponibilidad.begin();
         it != catalogoDisponibilidad.end(); ++it) {
        const Cita& cita = *it;
        if (cita.getDoctor().getCedula() == doctor.getCedula()) {
            cita.reporte();
            encontrado = true;
        }
    }
    if (!encontrado)
        std::cout << "El doctor no tiene citas registradas.\n";
}

void Agenda::mostrarCitasPorPaciente(const Paciente& paciente) const {
    bool encontrado = false;
    for (std::vector<Cita>::const_iterator it = catalogoDisponibilidad.begin();
         it != catalogoDisponibilidad.end(); ++it) {
        const Cita& cita = *it;
        if (cita.getPaciente().getCedula() == paciente.getCedula()) {
            cita.reporte();
            encontrado = true;
        }
    }
    if (!encontrado)
        std::cout << "El paciente no tiene citas registradas.\n";
}

std::vector<Cita> Agenda::getCitas() const {
    return catalogoDisponibilidad;
}