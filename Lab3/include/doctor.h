/**
 * @file doctor.h
 * @brief Define la clase Doctor, que representa la información profesional y personal de un médico del consultorio.
 */

#ifndef DOCTOR_H
#define DOCTOR_H
#include <string>

/**
 * @class Doctor
 * @brief Modela la información de un médico dentro del sistema del consultorio.
 * @details Contiene los datos identificativos y profesionales del doctor, 
 *          incluyendo su nombre, especialidad, cédula, correo y título académico.
 *          Invariante: cada doctor registrado debe tener una cédula única.
 */
class Doctor {
private:
    std::string nombre;
    std::string especialidad;
    std::string cedula;
    std::string correo;
    std::string titulo;

public:
    Doctor();
    Doctor(const std::string& nombre,
           const std::string& especialidad,
           const std::string& cedula,
           const std::string& correo,
           const std::string& titulo);
    std::string getNombre() const;
    std::string getCedula() const;
    std::string getEspecialidad() const;
    std::string getCorreo() const;
    std::string getTitulo() const;
    void verInfo() const;
};

#endif