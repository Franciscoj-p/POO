#ifndef UI_H
#define UI_H
/** 
 * @file UI.h
 * @brief Interfaz de usuario para la selección de armas y armaduras.
 * Implemente la interfaz de usuario para que el usuario pueda seleccionar
 * su arma y armadura antes de iniciar el combate.
 * También incluya la selección aleatoria para el oponente y la imprime en consola
 * 
 * Esta muy acortado, los mensajes del juego podrian mejorarse mucho.
 * Ademas esta clase aun no se encarga de todos los aspectos de la UI, solo de la seleccion
 * de armas y armaduras.
 */
#include "arma.h"
#include "armadura.h"
#include <cstdlib>
#include <iostream>

Arma* elegirArmaUsuario();
Armadura* elegirArmaduraUsuario();
Arma* elegirArmaOponente();
Armadura* elegirArmaduraOponente();

#endif
