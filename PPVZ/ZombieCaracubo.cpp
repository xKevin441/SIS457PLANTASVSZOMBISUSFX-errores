#include "ZombieCaracubo.h"

void ZombieCaracubo::resistenciaValde()
{
	vidaValde = 150;
	daño_planta = 25;
	while (vidaValde <= 0) 
	{
		vidaValde -= daño_planta;
	}
}
