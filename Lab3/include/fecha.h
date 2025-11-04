/**
 * @file fecha.h
 * @brief Define la estructura Fecha, utilizada para representar día, mes, año y hora de una cita médica.
 */

#ifndef FECHA_H
#define FECHA_H

#include <string>

/**
 * @struct Fecha
 * @brief Representa una fecha y hora específica dentro del sistema del consultorio.
 * @details Se utiliza para programar y comparar citas médicas.
 *          Invariante: los valores de día, mes, año y hora deben corresponder a una fecha válida y dentro del horario laboral.
 */
struct Fecha {
    int dia;   
    int mes;  
    int año;   
    int hora; 

    Fecha();
    Fecha(int d, int m, int a, int h);
/**
     * @brief Compara dos fechas completas (día, mes, año y hora).
     * @param otra Fecha con la que se desea comparar.
     * @return `true` si ambas fechas son idénticas en todos los campos, `false` en caso contrario.
     */
    bool compararFechas(const Fecha& otra) const;

    /**
     * @brief Devuelve una representación en texto de la fecha.
     * @return Cadena en formato "día/mes/año - hora:00".
     * @details Se usa para mostrar la fecha en reportes y listados de citas.
     */
    std::string toString() const;
};

#endif
