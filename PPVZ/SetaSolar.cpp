#include "SetaSolar.h"

SetaSolar::SetaSolar()
{
	diaNoche = "noche";
	valorSol = 25;
	costoSol = 25;
	frecuenciaGeneracion = 100;
	cantSolesPorCiclo = 1;
	color = "amarillo";
	posicionX = 6;
	posicionY = 4;

	tiempoVida = 0;

	tamaño = "pequeño";
}

void SetaSolar::cambiarTamaño()
{
	if (tiempoVida > 1000)
	{
		tamaño = "grande";
		cantSolesPorCiclo = 50;
	}
	tiempoVida++;
	
}

void SetaSolar::animarMovimiento()
{
	cout << "Una seta solar esta bailando en la posicion (" << posicionX << ", " << posicionY << ") " << endl;
}
