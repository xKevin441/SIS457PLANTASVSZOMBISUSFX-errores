#include "ZombieCaracono.h"

void ZombieCaracono::resistenciaCono()
{
	vidaCono = 150;
	daño_planta = 25;
	while (vidaCono <= 0)
	{
		vidaCono -= daño_planta;
	}
}
