#ifndef CITA_H
#define CITA_H
#include <string>
#include <vector>
#include "doctor.h"
#include "fecha.h"
#include "paciente.h"

class Cita {
private:
    Doctor doctor;
    Paciente paciente;
    Fecha fecha;
public:
    Cita(Doctor doctor, Paciente paciente, Fecha f);
    void reportar();
};

#endif 