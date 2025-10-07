#include "../include/empresa.h"
#include "../include/fecha.h"
#include <iostream>
#include <string>

int main() {
    Fecha fechaActual = {7, 10, 2025, 0};
    Empresa empresa("Tech Solutions", 7500);

    Fecha nacimiento1 = {5, 6, 1990, 0};
    Fecha antiguedad1 = {1, 1, 2015, 0};
    Fecha nacimiento2 = {20, 8, 1985, 0};
    Fecha antiguedad2 = {15, 3, 2010, 0};

    Empleado emp1("Alice Johnson", "E001", nacimiento1, antiguedad1);
    Empleado emp2("Bob Smith", "E002", nacimiento2, antiguedad2);

    emp1.registrarHoras(160);
    emp2.registrarHoras(150);

    empresa.registrarEmpleado(emp1);
    empresa.registrarEmpleado(emp2);

    std::cout << "Nomina total de la empresa: $" << empresa.calcularNomina() << std::endl;

    std::cout << "Empleados:" << std::endl;
    std::cout << "Empleado: " << "Alice Johnson" << std::endl;
    std::cout << "Edad: " << emp1.calcularEdad(fechaActual) << " años" << std::endl;
    std::cout << "Antiguedad: " << emp1.calcularAntiguedad(fechaActual) << " años" << std::endl;
    std::cout << "Salario: $" << emp1.calcularSalario(empresa.getValorHora()) << std::endl;
    std::cout << std::endl;
    std::cout << "Empleado: " << "Bob Smith" << std::endl;
    std::cout << "Edad: " << emp2.calcularEdad(fechaActual) << " años" << std::endl;
    std::cout << "Antiguedad: " << emp2.calcularAntiguedad(fechaActual) << " años" << std::endl;
    std::cout << "Salario: $" << emp2.calcularSalario(empresa.getValorHora()) << std::endl;

    return 0;
}