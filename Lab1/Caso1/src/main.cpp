#include "../include/Reporte.h"
#include "../include/Recipiente.h"
#include <iostream>
#include <limits>

int main() {
    double r, H;

    do {
        std::cout << "Ingrese el valor del radio de la base del recipiente (metros) (mayor que 0): " << std::endl;
        std::cin >> r;
        if (r <= 0 || std::cin.fail()) {
            std::cout << "Valor invalido. Intente de nuevo." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (r <= 0);

    do {
        std::cout << "Ingrese el valor de la altura del recipiente (metros) (mayor que 0): " << std::endl;
        std::cin >> H;
        if (H <= 0 || std::cin.fail()) {
            std::cout << "Valor invalido. Intente de nuevo." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (H <= 0);

    Recipiente r1(r, H);
    Reporte rep;
    
    rep.mostrarResultados(r1.calcularVolumenTotal());

    return 0;
}

