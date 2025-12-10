#include "../include/entidad.h"
#include "../include/balance.h"
#include <iostream>
Entidad::Entidad()
    : vida(ENTIDAD_VIDA),
      vidaMaxima(ENTIDAD_VIDA),
      viva(true)
{
    cuerpo = new Cuerpo();
}

Entidad::~Entidad() {
    delete cuerpo;
}
/**
 * Método para que la entidad reciba daño en una parte específica del cuerpo.
 * Si la entidad muere, se actualiza su estado a no viva.
 * recibirDañoEnParte devuelve el daño global después de aplicar la armadura y el multiplicador de la parte del cuerpo.
 */
void Entidad::recibirDañoEn(const std::string& nombreParte, float daño) {
    if (!viva) {
        std::cout << "La entidad ya está muerta.\n";
        return;
    }

    float dañoGlobal = cuerpo->recibirDañoEnParte(nombreParte, daño);
    vida -= dañoGlobal;

    if (vida < 0) vida = 0;

    if (!estaViva()) {
        viva = false;
        vida = 0;
    }

    mostrarEstado();
}
/** Método para verificar si la entidad está viva.
 * La entidad está viva si su vida es mayor que 0 y las partes críticas (cabeza y torso) están funcionales.
 */
bool Entidad::estaViva() const {
    return vida > 0 &&
           cuerpo->cabezaEstaFuncional() &&
           cuerpo->torsoEstaFuncional();
}

void Entidad::mostrarEstado() const {
    std::cout << "Vida: " << vida << " / " << vidaMaxima << std::endl;
    std::cout << "Estado: " << (viva ? "VIVA" : "MUERTA") << std::endl;
    cuerpo->mostrarEstado();
}

void Entidad::equiparArma(Arma* a) {
    this->arma = a;
    cuerpo->equiparArma(a);
}

void Entidad::equiparArmadura(Armadura* a) {
    this->armadura = a;
    cuerpo->equiparArmadura(a);
}
