#include "Jalapenio.h"

void Jalapenio::explotar(float posX, float posY)
{
	//Ubicacion de la planta
	posicionX = posX;
	posicionY = posY;

	filaAfectada = 1;

	da�o = 80;
	vida = 0;

	cout << "La planta explot� en una fila" << endl;
}
