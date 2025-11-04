/**
 * @file agenda.h
 * @brief Declara la clase Agenda, que gestiona el registro, cancelación y consulta de citas médicas.
 */

#ifndef AGENDA_H
#define AGENDA_H
#include <vector>
#include "cita.h"

/**
 * @class Agenda
 * @brief Administra las citas médicas del consultorio.
 * @details Permite registrar, cancelar y consultar la disponibilidad de los doctores.
 *          Invariante: un mismo doctor no puede tener dos citas en la misma fecha y hora.
 */
class Agenda {
private:
    std::vector<Cita> catalogoDisponibilidad; /**< Contenedor de todas las citas registradas. */

public:
    Agenda();
    bool registrarCita(const Cita& nuevaCita);
    bool cancelarCita(const Cita& cita);

    /**
     * @brief Muestra las horas disponibles de un doctor en un día determinado.
     * @details El método genera una lista de horas entre 7:00 y 16:00, 
     *          excluyendo las 12:00 (hora de almuerzo). Luego compara esas horas 
     *          con las citas ya registradas para el doctor en esa fecha, 
     *          eliminando las que estén ocupadas. El resultado muestra en consola 
     *          solo las horas válidas y libres para agendar.
     */
    void consultarDisponibilidad(const Doctor& doctor, const Fecha& fecha) const;

    void mostrarCitas() const;
    void mostrarCitasPorDoctor(const Doctor& doctor) const;
    void mostrarCitasPorPaciente(const Paciente& paciente) const;
    std::vector<Cita> getCitas() const;
};

#endif