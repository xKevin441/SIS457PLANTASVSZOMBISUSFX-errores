#include "Birasol.h"

Birasol::Birasol()
{
	diaNoche = "dia";
	colorPetalos = "amarillo";
	colorHojas = "verde";
	numCabezas = 2;
	frecuenciaGeneracion = 10;
	cantSolesPorCiclo = 2;
	valorSol = 50;

	
	posicionX = 4;
	posicionY = 3;

}

void Birasol::animarMovimiento()
{
	cout << "El birasol de la posicion (" << posicionX << ", " << posicionY << ") esta bailando" << endl;
}

void Birasol::spawnear()
{
	cout << "Aparecio un birasol en la (" << posicionX << ", " << posicionY << ")" << endl;
}

void Birasol::generarSoles()
{
	Sol solGenerado1 (posicionX, posicionY, valorSol);
	Sol solGenerado2 (posicionX, posicionY, valorSol);

	int tiempoEspera = solGenerado1.gettiempoEspera();
	while (tiempoEspera > 0)
	{
		cout << "Dibujando los 2 soles generados por " << nombre << " * *" << endl;
		tiempoEspera = tiempoEspera - 1;
	}

	solGenerado1.desaparecer();
	solGenerado2.desaparecer();
}
