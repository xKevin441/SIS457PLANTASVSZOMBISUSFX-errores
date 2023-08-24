#include "PlantaGeneradoraSoles.h"
#include "Sol.h"

void PlantaGeneradoraSoles::generarSol()
{
	Sol solGenerado(posicionX, posicionY, valorSol);
	int tiempoEspera = solGenerado.gettiempoEspera();
	while (tiempoEspera > 0)
	{
		cout << "Dibujando sol generado por " << nombre << " * " << endl;
		tiempoEspera = tiempoEspera - 1;
	}

	solGenerado.desaparecer();
}