#include "PlantaDisparo.h"

plantaDisparo::plantaDisparo()
{

	dañoDisparo = 0;
	alcanseDisparo = 3;
}
void plantaDisparo::disparo(float posX, float posY)
{
	//Ubicacion de la planta
	posicionX = posX;
	posicionY = posY;

	daño = 100;
	vida = 0;

	cout << "La planta disparo" << endl;
}