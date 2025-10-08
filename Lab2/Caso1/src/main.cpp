#include "../include/empresa.h"
#include "../include/fecha.h"
#include <iostream>
#include <string>

int main() {
    Fecha fechaActual = {7, 10, 2025, 0};
    Empresa empresa("IPOO grupo 4", 7500);

    Fecha nacimiento1 = {5, 6, 1990, 0};
    Fecha antiguedad1 = {1, 1, 2015, 0};
    Fecha nacimiento2 = {20, 8, 1985, 0};
    Fecha antiguedad2 = {15, 3, 2010, 0};

    Empleado emp1("Juan Francisco", "2515537", nacimiento1, antiguedad1);
    Empleado emp2("James Rodriguez", "2515536", nacimiento2, antiguedad2);

    emp1.registrarHoras(160);
    emp2.registrarHoras(150);

    empresa.registrarEmpleado(emp1);
    empresa.registrarEmpleado(emp2);

    std::cout << "Nomina total de la empresa: $" << empresa.calcularNomina() << std::endl;

     std::cout << "Lista de empleados:\n";

    const std::vector<Empleado>& lista = empresa.getEmpleados();
    for (size_t i = 0; i < lista.size(); ++i) {
        const Empleado& e = lista[i];  //referencia constante al empleado actual
        std::cout << "Empleado " << (i + 1) << ":\n";
        std::cout << "  Nombre: " << e.getNombre() << "\n";
        std::cout << "  ID: " << e.getId() << "\n";
        std::cout << "  Edad: " << e.calcularEdad(fechaActual) << " años\n";
        std::cout << "  Antigüedad: " << e.calcularAntiguedad(fechaActual) << " años\n";
        std::cout << "  Salario: $" << e.calcularSalario(empresa.getValorHora()) << "\n\n";
    }

    Empleado empleadoMasAntiguo = empresa.calcularEmpleadoViejo();
    std::cout << "\nEmpleado más antiguo: " << empleadoMasAntiguo.getNombre() << std::endl;
    return 0;
}