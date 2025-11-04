/**
 * @file cita.h
 * @brief Define la clase Cita, que asocia un doctor, un paciente y una fecha dentro del sistema del consultorio.
 */

#ifndef CITA_H
#define CITA_H
#include <string>
#include "doctor.h"
#include "fecha.h"
#include "paciente.h"

/**
 * @class Cita
 * @brief Representa una cita médica programada entre un doctor y un paciente.
 * @details Contiene la relación entre un Doctor, un Paciente y una Fecha específica.
 *          Invariante: una cita válida siempre tiene un doctor, un paciente y una fecha asignados.
 */
class Cita {
private:
    Doctor doctor;
    Paciente paciente;
    Fecha fecha;

public:
    Cita(const Doctor& doctor, const Paciente& paciente, const Fecha& fecha);
    Doctor getDoctor() const;
    Paciente getPaciente() const;
    Fecha getFecha() const;
    void reporte() const;
};

#endif
