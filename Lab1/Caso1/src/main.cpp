#include "../include/Reporte.h"
#include "../include/Recipiente.h"
#include <iostream>
#include <limits>

int main() {
    double r, h, H;

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

    do {
        std::cout << "Ingrese el valor de la altura de llenado (metros) (mayor que 0): " << std::endl;
        std::cin >> h;
        if (H <= 0 || h > H || std::cin.fail()) {
            std::cout << "Valor invalido. Intente de nuevo." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (h < 0 || h > H);

    Recipiente r1(r, h, H);
    Reporte rep;
    
    rep.mostrarResultados(r1.calcularVolumenes());

    return 0;
}

