#include "ZombieCaracono.h"

void ZombieCaracono::resistenciaCono()
{
	vidaCono = 150;
	da�o_planta = 25;
	while (vidaCono <= 0)
	{
		vidaCono -= da�o_planta;
	}
}
