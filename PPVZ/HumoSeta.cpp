#include "HumoSeta"
}
void HumoSeta : : disparar(float posX, float posY)
{
	//Ubicacion de la planta
	posicionX = posX;
	posicionY = posY;

	humoDisparo = 1;

	daño = 100;
	vida = 0;

	cout << "La planta disparo de humo" << endl;
}