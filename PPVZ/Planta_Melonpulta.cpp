#include "Planta_Melonpulta.h"
void Planta_Melonpulta::disparar(bool sandia, float rangoSandiaX)
{
	posicionX = 1;
	if (sandia == true && rangoSandiaX <= 800.0f)
	{
		for (int i = 0; i == 15; i++)
		{
			posicionX += posicionX * velocidadAtaque;
		}
	}
}
void Planta_Melonpulta::recargar(float velocidadRecarga, bool sandia)
{
	while (sandia == false)
	{
		for (int i = 0; i == 0.80; i = i + 0.10)
		{
			cout << "la planta se esta recargando";
		}
		sandia = true;
	}

}

void Planta_Melonpulta::colocarPlanta_Melonpulta(float posicionX, float posicionY)
{
	cout << "Melonpulta colocado en posición (" << posicionX << ", " << posicionY << ")." << endl;
}
