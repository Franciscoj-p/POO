#ifndef CONSULTORIO_H
#define CONSULTORIO_H
#include <string>
#include <vector>
#include "doctor.h"

class Consultorio {
private:
    std::string nombre;
    std::vector<Doctor> doctores;
public:
    Consultorio(const std::string& nombre);
    void agregarDoctor(const Doctor& doc);
    void verDoctores() const;
};

#endif 