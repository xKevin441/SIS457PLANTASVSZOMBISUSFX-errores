#include "Coltapulta.h"
void Coltapulta::disparar(bool col, float rangoColX)
{
	posicionX = 1;
	if (col == true && rangoColX <= 800.0f)
	{
		for (int i = 0; i < 15; i++)
		{
			posicionX += posicionX * velocidadAtaque;
		}
	}

}

void Coltapulta::recargar(float velocidadRecarga, bool col)
{
	while (col == false)
	{
		for (int i = 0; i <= 0.30; i = i + 0.10)
		{
			cout << "la planta esta recargando";
		}
		col = true;
	}

}

void Coltapulta::colocarColtapulta(float posicionX, float posicionY)
{
	cout << "Coltapulta colocados en posición (" << posicionX << ", " << posicionY << ")." << endl;
}
