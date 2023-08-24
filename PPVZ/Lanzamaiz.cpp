#include "Lanzamaiz.h"
void Lanzamaiz::disparar(bool maiz, float rangoMaizX)
{
	posicionX = 1;
	if (maiz == true && rangoMaizX <= 800.0f)
	{
		for (int i = 0; i < 15; i++)
		{
			posicionX += posicionX * velocidadAtaque;
		}
	}
}

void Lanzamaiz::recargar(float velocidadRecarga, bool maiz)
{
	while (maiz == false)
	{
		for (int i = 0; i <= 0.30; i = i + 0.10)
		{
			cout << "la planta esta recargando";
		}
		maiz = true;
	}
}

void Lanzamaiz::colocarLanzamaiz(float posicionX, float posicionY)
{
	cout << "Lanzamaiz colocados en posición (" << posicionX << ", " << posicionY << ")." << endl;
}
