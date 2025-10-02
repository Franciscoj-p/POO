#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>

class Paciente {
private:
    std::string nombre;
    std::string id;
    std::string motivoConsulta;
    std::string telefono;
    std::string correo;
    int edad;
public:
    Paciente(
        int edad, 
        const std::string& nombre, 
        const std::string& id, 
        const std::string& telefono, 
        const std::string& correo, 
        const std::string& motivoConsulta);
    void verInfo() const;
};
#endif 