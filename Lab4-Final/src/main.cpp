#include <iostream>
#include "../include/entidad.h"
#include "../include/sistemaBatalla.h"
#include "../include/UI.h"
/**
 * @brief Main del juego
 *
 * @author Grupo 6:
 *   - Camilo Andrés Alarcón Villareal 202519844-3744
 *   - Santiago Arce Núñez 202516846-3744
 *   - Francisco Popo 202515537-3744
 *   - Alejandro Martínez Ruiz 202510009-3744
 * 
 * 
 * @version 1.0
 * Profesor, siguiendo la recomendación de acotar el proyecto por la fecha, 
 * prioricé implementar completamente el flujo de combate por turnos de inicio a fin, con cálculo de probabilidades, daño, degradación y mensajes 
 * Dejé algunas características planeadas en la documentacion fuera de esta versión para garantizar un sistema estable, probado y alineado con el objetivo principal del trabajo.
 */

int main() {

    Entidad* usuario = new Entidad();
    usuario->equiparArma(elegirArmaUsuario());
    usuario->equiparArmadura(elegirArmaduraUsuario());

    Entidad* oponente = new Entidad();
    oponente->equiparArma(elegirArmaOponente());
    oponente->equiparArmadura(elegirArmaduraOponente());

    SistemaBatalla sistema;
    sistema.IniciarCombate(usuario, oponente);

    delete usuario->getArma();
    delete usuario->getArmadura();
    delete usuario;

    delete oponente->getArma();
    delete oponente->getArmadura();
    delete oponente;

}