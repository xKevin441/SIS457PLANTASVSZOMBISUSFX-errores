#include "ZombieCaracubo.h"

void ZombieCaracubo::resistenciaValde()
{
	vidaValde = 150;
	da�o_planta = 25;
	while (vidaValde <= 0) 
	{
		vidaValde -= da�o_planta;
	}
}
