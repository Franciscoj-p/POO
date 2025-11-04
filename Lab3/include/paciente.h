/**
 * @file paciente.h
 * @brief Define la clase Paciente, que almacena la información personal y médica de un paciente del consultorio.
 */

#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>

/**
 * @class Paciente
 * @brief Representa un paciente registrado en el sistema del consultorio.
 * @details Contiene los datos básicos del paciente, como su nombre, cédula, edad, 
 *          datos de contacto y motivo de consulta.
 *          Invariante: cada paciente debe tener una cédula única y una edad mayor que cero.
 */
class Paciente {
private:
    int edad;
    std::string nombre;
    std::string cedula;
    std::string telefono;
    std::string correo;
    std::string motivoConsulta;

public:
    Paciente();
    Paciente(int edad,
             const std::string& nombre,
             const std::string& cedula,
             const std::string& telefono,
             const std::string& correo,
             const std::string& motivoConsulta);
    std::string getNombre() const;
    std::string getCedula() const;
    std::string getTelefono() const;
    std::string getCorreo() const;
    int getEdad() const;
    std::string getMotivo() const;
    void verInfo() const;
};

#endif