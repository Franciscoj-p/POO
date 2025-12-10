#include "../include/sistemaBatalla.h"
#include "../include/balance.h"
#include <iostream>
#include <cstdlib>  // para rand() y srand()
 /**
  * Resolvimos el problema como pudimos :p
  * 
  * 
  */
SistemaBatalla::SistemaBatalla()
{
	usuario = 0;
	oponente = 0;
	ronda.clear();
    combateActivo = false;

}

SistemaBatalla::~SistemaBatalla()
{
    for (size_t i = 0; i < ronda.size(); ++i) {
        delete ronda[i];
    }
    ronda.clear();
}
 /**
  * inicializa el bucle del combate entre dos entidades
  * 
  */
void SistemaBatalla::IniciarCombate(Entidad* us, Entidad* op)
{
	this->usuario = us;
	this->oponente = op;
    bucleCombate();
}
 /**
  * sigue hasta q no hayan ganadores, un ganador se encuentra cuando alguno muere
  * 
  */
void SistemaBatalla::bucleCombate()
{
    if (!usuario || !oponente) {
        std::cout << "Error: Usuario u oponente no definidos." << std::endl;
        return;
    }

    combateActivo = true;
    Entidad* ganadorCombate = 0;

    while (combateActivo) {
        ResolverTurno();

        ganadorCombate = ganador();
        if (ganadorCombate != 0) {
            combateActivo = false;
        }
    }

    if (ganadorCombate == usuario) {
        std::cout << "¡Has ganado el combate!" << std::endl;
    } else {
        std::cout << "Has perdido el combate." << std::endl;
    }
}


Entidad* SistemaBatalla::ganador() const
{
    if (!usuario->estaViva()) {
        return oponente;
    } else if (!oponente->estaViva()) {
        return usuario;
    } else {
        return 0;
    }
}
 /**
  * las entidades pueden atacar o defender, se resuelven las defensas primero, que tiene un efecto de invulnerabilidad sobre la parte que se defiende, luego los ataques
  * se calculan las probabilidaddes de acertar el ataque segun que tan dificil sea dar a la parte que se apunta, y la precision del arma
  * 
  */
void SistemaBatalla::ResolverTurno()
{
    Turno* turno = new Turno();

    // ===== 1. Elegir acciones =====
    std::string accionUsuario = ElegirAccion(usuario);
    std::string accionOponente = ElegirAccion(oponente);

    turno->setAtacante(usuario);
    turno->setReceptora(oponente);

    // ===== 2. Registrar defensa primero =====
    if (accionUsuario == "Defender") {
        std::string parteDefensa = ElegirDefensa(usuario);
        turno->setObjetivoAtacante(parteDefensa);
        turno->setAccionAtacante("Defender");
    } else {
        std::string objetivo = ElegirObjetivo(usuario);
        turno->setObjetivoAtacante(objetivo);
        turno->setAccionAtacante("Atacar");
    }

    if (accionOponente == "Defender") {
        std::string parteDefensa = ElegirDefensa(oponente);
        turno->setObjetivoReceptora(parteDefensa);
        turno->setAccionReceptora("Defender");
    } else {
        std::string objetivo = ElegirObjetivo(oponente);
        turno->setObjetivoReceptora(objetivo);
        turno->setAccionReceptora("Atacar");
    }

    // ===== 3. Resolver defensas =====
    if (turno->getAccionAtacante() == "Defender") {
        std::string parteDefendida = turno->getObjetivoAtacante();
        std::cout << "Usuario defiende " << parteDefendida << std::endl;
        std::cout << "======================================" << std::endl;
        usuario->defenderParte(parteDefendida); 
    }

    if (turno->getAccionReceptora() == "Defender") {
        std::string parteDefendida = turno->getObjetivoReceptora();
        std::cout << "Oponente defiende " << parteDefendida << std::endl;
        std::cout << "======================================" << std::endl;
        oponente->defenderParte(parteDefendida);
    }

    // ===== 4. Resolver ataques =====
    // Usuario ataca
    if (turno->getAccionAtacante() == "Atacar") {
        float daño = usuario->getAtaque();
        std::string objetivo = turno->getObjetivoAtacante();
        float precisionArma = usuario->getArma()->getPrecision();
        float modificadorParte = usuario->getCuerpo()->getModificadorPrecision(objetivo);
        float precision = precisionArma * modificadorParte;

        if (calcularAcierto(precision)) {
            std::cout << "Usuario ataca a Oponente en " << objetivo << " con " << daño << " daño" << std::endl;
            std::cout << "======================================" << std::endl;
            std::cout << "Estado de Oponente:" << std::endl;
            oponente->recibirDañoEn(objetivo, daño);
        } else {
            std::cout << "Usuario falla el ataque a Oponente en " << objetivo << std::endl;
            std::cout << "======================================" << std::endl;
        }
    }

    // Oponente ataca
    if (turno->getAccionReceptora() == "Atacar") {
        float daño = oponente->getAtaque();
        std::string objetivo = turno->getObjetivoReceptora();
        float precisionArma = oponente->getArma()->getPrecision();
        float modificadorParte = oponente->getCuerpo()->getModificadorPrecision(objetivo);
        float precision = precisionArma * modificadorParte;

        if (calcularAcierto(precision)) {
            std::cout << "Oponente ataca a Usuario en " << objetivo << " con " << daño << " daño" << std::endl;
            std::cout << "======================================" << std::endl;
            std::cout << "Estado de Usuario:" << std::endl;
            usuario->recibirDañoEn(objetivo, daño);
        } else {
            std::cout << "Oponente falla el ataque a Usuario en " << objetivo << std::endl;
            std::cout << "======================================" << std::endl;
        }
    }

    // ===== 5. Guardar turno =====
    usuario->getCuerpo()->resetDefensas();
    oponente->getCuerpo()->resetDefensas();
    ronda.push_back(turno);
}

std::string SistemaBatalla::ElegirAccion(Entidad* entidad)
{
    if (entidad == usuario) {
        std::string accion;
        while (true) {
            std::cout << "Elige una accion (Atacar/Defender): ";
            std::cin >> accion;

            // Convertir a minúscula simple
            for (size_t i = 0; i < accion.size(); ++i)
                if (accion[i] >= 'A' && accion[i] <= 'Z')
                    accion[i] = accion[i] + ('a' - 'A');

            if (accion == "atacar" || accion == "defender") {
                return (accion == "atacar") ? "Atacar" : "Defender";
            } else {
                std::cout << "Acción inválida. Intenta de nuevo." << std::endl;
            }
        }
    } else if (entidad == oponente) {
        // IA simple: elegir aleatoriamente atacar o defender
        int opcion = rand() % 2; // 0 o 1
        if (opcion == 0)
            return "Atacar";
        else
            return "Defender";
    }

    // Valor por defecto en caso de error
    return "Atacar";
}


std::string SistemaBatalla::ElegirObjetivo(Entidad* entidad)
{
    if (entidad == usuario) {
        std::string objetivo;
        while (true) {
            std::cout << "Elige dónde atacar (cabeza/torso/brazos/piernas): ";
            std::cin >> objetivo;

            // Convertir a minúscula simple para evitar errores de mayúsculas
            for (size_t i = 0; i < objetivo.size(); ++i)
                if (objetivo[i] >= 'A' && objetivo[i] <= 'Z')
                    objetivo[i] = objetivo[i] + ('a' - 'A');

            if (objetivo == "cabeza" || objetivo == "torso" || 
                objetivo == "brazos" || objetivo == "piernas") 
            {
                return objetivo;
            } else {
                std::cout << "Objetivo inválido. Intenta de nuevo." << std::endl;
            }
        }
    } else {
        // Lógica simple de IA: escoger aleatoriamente una parte del cuerpo
        int random = rand() % 4; // 0 a 3
        switch(random) {
            case 0: return "cabeza";
            case 1: return "torso";
            case 2: return "brazos";
            case 3: return "piernas";
        }
    }
    return "torso"; // valor por defecto
}

std::string SistemaBatalla::ElegirDefensa(Entidad* entidad)
{
    if (entidad == usuario) {
        std::string parte;
        while (true) {
            std::cout << "Elige qué parte defender (cabeza/torso/brazos/piernas): ";
            std::cin >> parte;

            for (size_t i = 0; i < parte.size(); ++i)
                if (parte[i] >= 'A' && parte[i] <= 'Z')
                    parte[i] = parte[i] + ('a' - 'A');

            if (parte == "cabeza" || parte == "torso" || parte == "brazos" || parte == "piernas") {
                return parte;
            } else {
                std::cout << "Parte inválida. Intenta de nuevo." << std::endl;
            }
        }
    } else if (entidad == oponente) {
        // IA simple: defender una parte aleatoria
        int random = rand() % 4;
        switch(random) {
            case 0: return "cabeza";
            case 1: return "torso";
            case 2: return "brazos";
            case 3: return "piernas";
        }
    }
    return "torso"; // valor por defecto
}

bool SistemaBatalla::calcularAcierto(float precision)
{
    double r = static_cast<double>(rand()) / static_cast<double>(RAND_MAX);
    double variacion = r * 0.2 - 0.1;
    float valorFinal = precision + static_cast<float>(variacion);

    if (valorFinal < 0.0f) valorFinal = 0.0f;
    if (valorFinal > 1.0f) valorFinal = 1.0f;

    float random = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
    return random < valorFinal;
}
