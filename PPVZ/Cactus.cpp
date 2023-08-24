#include "Cactus.h"
void Cactus::disparar(bool espina, float rangoEspinaX)
{
	posicionX = 1;
	if (espina == true && rangoEspinaX <= 800.0f)
	{
		for (int i = 0; i < 15; i++)
		{
			posicionX += posicionX * velocidadAtaque;
		}
	}
}

void Cactus::recargar(float velocidadRecarga, bool espina)
{
	while (espina == false)
	{
		for (int i = 0; i <= 0.20; i = i + 0.10)
		{
			cout << "la planta esta recargando";
		}
		espina = true;
	}

}

void Cactus::colocarCactus(float posicionX, float posicionY)
{
	cout << "Cactus colocados en posición (" << posicionX << ", " << posicionY << ")." << endl;
}
