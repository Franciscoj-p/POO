#ifndef SISTEMABATALLA_H
#define SISTEMABATALLA_H

#include "entidad.h"
#include "turno.h"
#include <vector>
#include <string>
/**
 * 
 * * @class SistemaBatalla
 * * @brief Clase que representa el sistema de batalla entre dos entidades.
 * * esta clase se encarga de coordinar las interacciones entre usuario y oponente, realizando turnos y gestionando el combate.
 * 
 * 
 * 
 * 
 *  
 */
class SistemaBatalla {
private:
    Entidad* usuario;
    Entidad* oponente;
    std::vector<Turno*> ronda;
    bool combateActivo;

public:
    SistemaBatalla();
    ~SistemaBatalla();

    void IniciarCombate(Entidad* usuario, Entidad* oponente);
    void ResolverTurno();
    std::string ElegirAccion(Entidad* entidad);
    std::string ElegirObjetivo(Entidad* entidad);
    std::string ElegirDefensa(Entidad* entidad);
    void bucleCombate();
    Entidad* ganador() const;
    bool calcularAcierto(float probabilidad);
};

#endif
