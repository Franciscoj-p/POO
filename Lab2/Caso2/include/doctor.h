#ifndef DOCTOR_H
#define DOCTOR_H
#include <string>

class Doctor {
private:
    std::string nombre;
    std::string especialidad;
    std::string id;
public:
    Doctor(
        const std::string& nombre, 
        const std::string& especialidad, 
        const std::string& id);
    void verInfo() const;
};
#endif 