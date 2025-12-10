#ifndef BRAZOS_H
#define BRAZOS_H

#include "parteCuerpo.h"

class Brazos : public ParteCuerpo
{
	public:
		Brazos();
		virtual void mostrarEstado() const;
};
#endif