#include "Petacereza.h"

void Petacereza::explotar(float posX, float posY)
{
	areaExplosion = 9;
	
	posicionX = posX;
	posicionY = posY;

	da�o = 100;
	vida = 0;

	cout << "La planta explot� en un area de 9 tiles" << endl;

}
