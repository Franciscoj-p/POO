#include <iostream>
#include "../include/espada.h"
#include "../include/hacha.h"
#include "../include/cuchillo.h"
#include "../include/arco.h"
/**
 * @brief Main para pruebas de escritorio de las clases de armas del laboratorio 4.
 *
 * @author Grupo 6:
 *   - Camilo Andrés Alarcón Villareal 202519844-3744
 *   - Santiago Arce Núñez 202516846-3744
 *   - Francisco Popo 202515537-3744
 *   - Alejandro Martínez Ruiz 202510009-3744
 */
int main() {

    int durabilidadInicial = 100;     // Qué tanto aguanta antes de romperse
    int dañoBase = 100;               // Daño del golpe
    float pesoArma = 0;            // Qué tan pesada es en kg
    float precisionBase = 0;      // Probabilidad base de acertar, porcentaje

    Arma* Espada1 = new Espada(
        durabilidadInicial,
        dañoBase,
        pesoArma,
        precisionBase
    );

    Arma* Hacha1 = new Hacha(
        durabilidadInicial,
        dañoBase,
        pesoArma,
        precisionBase
    );

    Arma* Cuchillo1 = new Cuchillo(
        durabilidadInicial,
        dañoBase,
        pesoArma,
        precisionBase
    );
    Arma* Arco1 = new Arco(
        durabilidadInicial,
        dañoBase,
        pesoArma,
        precisionBase //en un caso real esta variable se calcula segun los atributos de la entidad
    );
    
    // Demostración del polimorfismo
    std::cout << "Descripcion del arma: " << Espada1->describir() << std::endl;
    std::cout << "Durabilidad: " << Espada1->getDurabilidad() << std::endl;
    std::cout << "Daño de Ataque: " << Espada1->getDañoAtaque() << std::endl;
    std::cout << "Peso: " << Espada1->getPeso() << "kg" << std::endl;
    std::cout << "Precisión: " << Espada1->getPrecision() << "%" << std::endl;  
    
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Descripcion del arma: " << Hacha1->describir() << std::endl;
    std::cout << "Durabilidad: " << Hacha1->getDurabilidad() << std::endl;
    std::cout << "Daño de Ataque: " << Hacha1->getDañoAtaque() << std::endl;
    std::cout << "Peso: " << Hacha1->getPeso() << "kg" << std::endl;
    std::cout << "Precisión: " << Hacha1->getPrecision() << "%" << std::endl;

    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Descripcion del arma: " << Cuchillo1->describir() << std::endl;
    std::cout << "Durabilidad: " << Cuchillo1->getDurabilidad() << std::endl;
    std::cout << "Daño de Ataque: " << Cuchillo1->getDañoAtaque() << std::endl;
    std::cout << "Peso: " << Cuchillo1->getPeso() << "kg" << std::endl;
    std::cout << "Precisión: " << Cuchillo1->getPrecision() << "%" << std::endl;

    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Descripcion del arma: " << Arco1->describir() << std::endl;
    std::cout << "Durabilidad: " << Arco1->getDurabilidad() << std::endl;
    std::cout << "Daño de Ataque: " << Arco1->getDañoAtaque() << std::endl;
    std::cout << "Peso: " << Arco1->getPeso() << "kg" << std::endl;
    std::cout << "Precisión: " << Arco1->getPrecision() << "% ???" << std::endl;

    delete Hacha1;
    delete Cuchillo1;
    delete Arco1;
    delete Espada1;
    return 0;
}
