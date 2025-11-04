#include "../include/sistemaConsultorio.h"
#include <iostream>

SistemaConsultorio::SistemaConsultorio() : consultorio("Vivir Sano") {
    // Agregar doctores iniciales
    Doctor d1("Dr. Juancho Rizzo", "Medicina General - Univalle", "657686", "juancho@vivirsano.com", "Medicina General");
    Doctor d2("Dra. Camila Ortaliz", "Medicina General - Javeriana", "454575", "camila@vivirsano.com", "Medicina General");
    Doctor d3("Dra. Anacleta Dique", "Oncologia - UniLibre", "243535", "anacleta@vivirsano.com", "Oncologia");
    consultorio.agregarDoctor(d1);
    consultorio.agregarDoctor(d2);
    consultorio.agregarDoctor(d3);
}

bool SistemaConsultorio::existeDoctor(const std::string& cedula) const {
    std::vector<Doctor> doctores = consultorio.getDoctores();
    for (size_t i = 0; i < doctores.size(); ++i) {
        if (doctores[i].getCedula() == cedula)
            return true;
    }
    return false;
}

bool SistemaConsultorio::existePaciente(const std::string& cedula) const {
    for (size_t i = 0; i < pacientes.size(); ++i) {
        if (pacientes[i].getCedula() == cedula)
            return true;
    }
    return false;
}

Doctor SistemaConsultorio::buscarDoctorPorCedula(const std::string& cedula) const {
    std::vector<Doctor> doctores = consultorio.getDoctores();
    for (size_t i = 0; i < doctores.size(); ++i) {
        if (doctores[i].getCedula() == cedula)
            return doctores[i];
    }
    return Doctor();
}

Paciente SistemaConsultorio::buscarPacientePorCedula(const std::string& cedula) const {
    for (size_t i = 0; i < pacientes.size(); ++i) {
        if (pacientes[i].getCedula() == cedula)
            return pacientes[i];
    }
    return Paciente();
}

void SistemaConsultorio::registrarPaciente() {
    std::string nombre, cedula, telefono, correo, motivo;
    int edad;

    std::cout << "\n--- Registro de Paciente ---\n";
    std::cout << "Nombre: "; std::getline(std::cin, nombre);
    std::cout << "Cédula: "; std::getline(std::cin, cedula);
    if (existePaciente(cedula)) {
        std::cout << "Ya existe un paciente con esa cédula.\n";
        return;
    }
    std::cout << "Teléfono: "; std::getline(std::cin, telefono);
    std::cout << "Correo: "; std::getline(std::cin, correo);
    std::cout << "Edad: "; std::cin >> edad;
    std::cin.ignore();
    std::cout << "Motivo de consulta: "; std::getline(std::cin, motivo);

    Paciente p(edad, nombre, cedula, telefono, correo, motivo);
    pacientes.push_back(p);
    std::cout << "Paciente registrado correctamente.\n";
}

void SistemaConsultorio::registrarCita() {
    std::string cedulaDoctor, cedulaPaciente;
    int dia, mes, anio, hora;

    std::cout << "\n--- Registro de Cita ---\n";
    consultorio.verDoctores();
    std::cout << "Cédula del médico: "; std::getline(std::cin, cedulaDoctor);
    if (!existeDoctor(cedulaDoctor)) {
        std::cout << "Doctor no encontrado.\n"; return;
    }
    std::cout << "Cédula del paciente: "; std::getline(std::cin, cedulaPaciente);
    if (!existePaciente(cedulaPaciente)) {
        std::cout << "Paciente no registrado.\n"; return;
    }

    std::cout << "Día: "; std::cin >> dia;
    std::cout << "Mes: "; std::cin >> mes;
    std::cout << "Año: "; std::cin >> anio;
    std::cout << "Hora: "; std::cin >> hora;
    std::cin.ignore();

    Doctor d = buscarDoctorPorCedula(cedulaDoctor);
    Paciente p = buscarPacientePorCedula(cedulaPaciente);
    Fecha f(dia, mes, anio, hora);
    Cita c(d, p, f);

    if (!agenda.registrarCita(c))
        std::cout << "No se pudo registrar la cita (conflicto de horario).\n";
    else
        std::cout << "Cita registrada correctamente.\n";
}

void SistemaConsultorio::mostrarPacientes() {
    if (pacientes.empty()) {
        std::cout << "No hay pacientes registrados.\n"; return;
    }
    std::cout << "\n--- Lista de Pacientes ---\n";
    for (size_t i = 0; i < pacientes.size(); ++i)
        pacientes[i].verInfo();
}

void SistemaConsultorio::mostrarCitas() {
    agenda.mostrarCitas();
}

void SistemaConsultorio::filtrarCitasPorDoctor() {
    std::string cedula;
    std::cout << "Cédula del doctor: "; std::getline(std::cin, cedula);
    if (!existeDoctor(cedula)) { std::cout << "Doctor no encontrado.\n"; return; }
    agenda.mostrarCitasPorDoctor(buscarDoctorPorCedula(cedula));
}

void SistemaConsultorio::filtrarCitasPorPaciente() {
    std::string cedula;
    std::cout << "Cédula del paciente: "; std::getline(std::cin, cedula);
    if (!existePaciente(cedula)) { std::cout << "Paciente no encontrado.\n"; return; }
    agenda.mostrarCitasPorPaciente(buscarPacientePorCedula(cedula));
}

void SistemaConsultorio::consultarDisponibilidad() {
    std::string cedula;
    int dia, mes, anio;
    std::cout << "Cédula del médico: "; std::getline(std::cin, cedula);
    if (!existeDoctor(cedula)) { std::cout << "Doctor no encontrado.\n"; return; }

    std::cout << "Día: "; std::cin >> dia;
    std::cout << "Mes: "; std::cin >> mes;
    std::cout << "Año: "; std::cin >> anio;
    std::cin.ignore();

    Fecha f(dia, mes, anio, 0); // hora sin usar
    agenda.consultarDisponibilidad(buscarDoctorPorCedula(cedula), f);
}


void SistemaConsultorio::cerrarSesion() {
    std::cout << "Cerrando sesión sin guardar información...\n";
}

void SistemaConsultorio::mostrarMenu() {
    int opcion = 0;
    do {
        std::cout << "\n=== Sistema Consultorio 'Vivir Sano' ===\n";
        std::cout << "1. Ver médicos\n";
        std::cout << "2. Registrar paciente\n";
        std::cout << "3. Registrar cita\n";
        std::cout << "4. Ver todos los pacientes\n";
        std::cout << "5. Ver todas las citas\n";
        std::cout << "6. Filtrar citas por médico\n";
        std::cout << "7. Filtrar citas por paciente\n";
        std::cout << "8. Consultar disponibilidad de médico\n";
        std::cout << "9. Cerrar sesión\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        std::cin.ignore();

        switch (opcion) {
            case 1: consultorio.verDoctores(); break;
            case 2: registrarPaciente(); break;
            case 3: registrarCita(); break;
            case 4: mostrarPacientes(); break;
            case 5: mostrarCitas(); break;
            case 6: filtrarCitasPorDoctor(); break;
            case 7: filtrarCitasPorPaciente(); break;
            case 8: consultarDisponibilidad(); break;
            case 9: cerrarSesion(); break;
            default: std::cout << "Opción no válida.\n"; break;
        }
    } while (opcion != 9);
}