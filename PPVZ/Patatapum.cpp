#include "Patatapum.h"

void Patatapum::activar()
{
	estadoRecarga = 0.0;
}

void Patatapum::explotar(float posX, float posY)
{
	//Ubicacion de la planta

	posicionX = posX;
	posicionY = posY;

	da�o = 50;
	vida = 0;

	cout << "Patatapum explot�" << endl;
}