#include "Seta_Desesporadora"
}
void Seta_Desesporadora : : disparar(float posX, float posY)
{
	//Ubicacion de la planta
	posicionX = posX;
	posicionY = posY;

	nocheDisparo = 1;

	daño = 100;
	vida = 0;

	cout << "La planta disparo de noche" << endl;
}