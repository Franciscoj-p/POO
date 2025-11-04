/**
 * @file sistemaConsultorio.h
 * @brief Declara la clase SistemaConsultorio, que coordina doctores, pacientes y citas mediante un menú interactivo.
 */

#ifndef SISTEMACONSULTORIO_H
#define SISTEMACONSULTORIO_H

#include <vector>
#include <string>
#include "consultorio.h"
#include "agenda.h"
#include "paciente.h"

/**
 * @class SistemaConsultorio
 * @brief Controla el funcionamiento general del consultorio médico.
 * @details Administra la interacción entre doctores, pacientes y agenda de citas. 
 *          Invariante: el sistema mantiene coherencia entre los datos de pacientes, doctores y citas registradas.
 */
class SistemaConsultorio {
private:
    Consultorio consultorio;
    Agenda agenda;
    std::vector<Paciente> pacientes;
    Paciente buscarPacientePorCedula(const std::string& cedula) const;
    Doctor buscarDoctorPorCedula(const std::string& cedula) const;
    bool existePaciente(const std::string& cedula) const;
    bool existeDoctor(const std::string& cedula) const;

public:
    SistemaConsultorio();
    void mostrarMenu();
    void registrarPaciente();
    void registrarCita();
    void mostrarCitas();
    void filtrarCitasPorDoctor();
    void filtrarCitasPorPaciente();
    void consultarDisponibilidad();
    void mostrarPacientes();
    void cerrarSesion();
};

#endif

