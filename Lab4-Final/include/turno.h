#ifndef TURNO_H
#define TURNO_H
#include <string>
#include "entidad.h"
 /**
  * @class Turno
  * @brief Clase que representa un turno de batalla entre dos entidades.
  * por ahora solo almacena la accion de cada entidad en el turno, lo implemente para tratar de ordenar las cosas en sistemaBatalla
  * 
  */
class Turno {
private:
    Entidad* entidadAtacante;
    Entidad* entidadReceptora;
    std::string accionAtacante;
    std::string objetivoAtacante;
    std::string accionReceptora;
    std::string objetivoReceptora;
public:
    Turno();
    ~Turno();
    void setAtacante(Entidad* atacante);
    void setReceptora(Entidad* receptora);
    void setAccionAtacante(const std::string& accion);
    void setObjetivoAtacante(const std::string& objetivo);
    void setObjetivoReceptora(const std::string& objetivo);
    void setAccionReceptora(const std::string& accion);
    Entidad* getEntidadAtacante() const;
    std::string getObjetivoAtacante() const;
    std::string getObjetivoReceptora() const;
    Entidad* getEntidadReceptora() const;
    std::string getAccionAtacante() const;
    std::string getAccionReceptora() const;

};
#endif