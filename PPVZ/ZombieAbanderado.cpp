#include "ZombieAbanderado.h"

void ZombieAbanderado::revivir()
{
	vida = 100;
	while (vida>=0)
	{
		vida -= da�o_planta;
	}
	vida = 100;
}
