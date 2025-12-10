#ifndef BALANCE_H
#define BALANCE_H

/**
 * @file balance.h
 * @brief Constantes de balance del juego.
 * lo hice para no tener que cambiar en el cpp todos los parametros en cada clase para ajustes de balance
 * 
 * 
 * 
 * 
 **/ 

// ===== ENTIDAD =====
const float ENTIDAD_VIDA = 300.0f;

// ===== ARMA =====
const float ARCO_DAÑO = 60.0f;
const float ARCO_PRECISION = 0.9f;

const float HACHA_DAÑO = 90.0f;
const float HACHA_PRECISION = 0.7f;

const float CUCHILLO_DAÑO = 35.0f;
const float CUCHILLO_PRECISION = 1.0f;

const float ESPADA_DAÑO = 70.0f;
const float ESPADA_PRECISION = 0.8f;

// ===== ARMADURA =====
const float LIVIANA_DURABILIDAD = 80.0f;
const float LIVIANA_DAÑO_ABS = 0.2f;   // reduce 20%

const float NORMAL_DURABILIDAD = 150.0f;
const float NORMAL_DAÑO_ABS = 0.35f;  // reduce 35%

const float PESADA_DURABILIDAD = 250.0f;
const float PESADA_DAÑO_ABS = 0.5f;   // reduce 50%

// ===== PARTES DEL CUERPO =====
const float CABEZA_INTEGRIDAD = 60.0f;
const float CABEZA_MULT_DAÑO  = 2.0f;
const float CABEZA_MOD_PRECISION = 0.6f;

const float TORSO_INTEGRIDAD = 140.0f;
const float TORSO_MULT_DAÑO  = 1.0f;
const float TORSO_MOD_PRECISION = 0.9f;

const float BRAZOS_INTEGRIDAD = 80.0f;
const float BRAZOS_MULT_DAÑO  = 0.6f;
const float BRAZOS_MOD_PRECISION = 0.8f;

const float PIERNAS_INTEGRIDAD = 90.0f;
const float PIERNAS_MULT_DAÑO  = 0.7f;
const float PIERNAS_MOD_PRECISION = 0.9f;

#endif
