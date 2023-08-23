#include "Petaseta.h"

void Petaseta::explotar(float posX, float posY)
{
	//Ubicacion de la planta
	posicionX = posX;
	posicionY = posY;

	areaTotal = 100; // Total tiles afectados
	daño = 100;
	vida = 0;
	
	cout << "Nuclear :'(" << endl;

}
