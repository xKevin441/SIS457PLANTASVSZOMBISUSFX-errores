#include "Seta_Miedica"

void Seta_Miedica : : disparar(float posX, float posY)
{
	//Ubicacion de la planta
	posicionX = posX;
	posicionY = posY;

	proyectilDisparo = 1;

	daño = 100;
	vida = 0;

	cout << "La planta disparo de proyectil" << endl;
}