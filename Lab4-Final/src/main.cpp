#include <iostream>
#include "../include/espada.h"
#include "../include/hacha.h"
#include "../include/cuchillo.h"
#include "../include/arco.h"
#include "../include/armaduraPesada.h"
#include "../include/armaduraLiviana.h"
#include "../include/armaduraNormal.h"
#include "../include/torso.h"
#include "../include/cabeza.h"
#include "../include/brazos.h"
#include "../include/piernas.h"
#include "../include/cuerpo.h"
#include "../include/entidad.h"
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

    Arma* espada = new Espada();
    Armadura* armadura = new ArmaduraPesada();

    Entidad* entidad = new Entidad();
    entidad->equiparArma(espada);
    entidad->equiparArmadura(armadura);

    // ===== ESTADO INICIAL =====
    std::cout << "ESTADO INICIAL" << std::endl;
    std::cout << "==========================" << std::endl;

    // ===== PRUEBA 1: impacto leve a cabeza =====
    std::cout << "Golpe leve a cabeza (30)" << std::endl;
    entidad->recibirDañoEn("cabeza", 30);
    std::cout << "==========================" << std::endl;

    // ===== PRUEBA 2: daño medio a extremidad =====
    std::cout << "Golpe medio a brazos (60)" << std::endl;
    entidad->recibirDañoEn("brazos", 60);
    std::cout << "==========================" << std::endl;

    // ===== PRUEBA 3: daño fuerte a torso (armadura aún activa) =====
    std::cout << "Golpe fuerte a torso (100)" << std::endl;
    entidad->recibirDañoEn("torso", 100);
    std::cout << "==========================" << std::endl;

    // ===== PRUEBA 4: destruir armadura =====
    std::cout << "Golpe masivo a torso (200)" << std::endl;
    entidad->recibirDañoEn("torso", 200);
    std::cout << "==========================" << std::endl;

    // ===== PRUEBA 5: daño sin armadura =====
    std::cout << "Golpe directo a cabeza sin armadura (40)" << std::endl;
    entidad->recibirDañoEn("cabeza", 40);
    std::cout << "==========================" << std::endl;

    // ===== PRUEBA FINAL: golpe letal =====
    std::cout << "Golpe letal a cabeza (80)" << std::endl;
    entidad->recibirDañoEn("cabeza", 80);
    std::cout << "==========================" << std::endl;

    delete entidad;
    delete espada;
    delete armadura;

    return 0;
}
