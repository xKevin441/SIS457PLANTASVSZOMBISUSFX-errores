#include "PlantaExplosiva.h"

PlantaExplosiva::PlantaExplosiva()
{
	da�oExplosion = 0;
	tiempoExplosion = 3;
}

void PlantaExplosiva::explotar(float posX, float posY)
{
	//Ubicacion de la planta
	posicionX = posX;
	posicionY = posY;
	
	da�o = 100;
	vida = 0;

	cout << "La planta explot�" << endl;
}
