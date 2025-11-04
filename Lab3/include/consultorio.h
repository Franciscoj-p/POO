/**
 * @file consultorio.h
 * @brief Define la clase Consultorio, que gestiona doctores, pacientes y citas médicas.
 */

#ifndef CONSULTORIO_H
#define CONSULTORIO_H

#include <string>
#include <vector>
#include "doctor.h"
#include "paciente.h"
#include "agenda.h"

/**
 * @class Consultorio
 * @brief Representa un consultorio médico que administra doctores, pacientes y su agenda de citas.
 * @details La clase centraliza la gestión de información y delega en la Agenda la programación de citas.
 *          Invariante: el consultorio mantiene consistencia entre su lista de doctores, pacientes y citas registradas.
 */
class Consultorio {
private:
    std::string nombre;
    std::vector<Doctor> doctores;
    std::vector<Paciente> pacientes;
    Agenda agenda;

public:
    Consultorio();
    Consultorio(const std::string& nombre);
    void agregarDoctor(const Doctor& doc);
    void verDoctores() const;
    std::vector<Doctor> getDoctores() const;
    void registrarPaciente(const Paciente& paciente);
    void verPacientes() const;
    void agendarCita(const Cita& cita);
    void verAgenda() const;
};

#endif