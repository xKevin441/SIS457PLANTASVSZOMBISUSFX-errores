#include "Rrastrillo.h"

void Rastrillo::spawnear(float posicionX, float posicionY, int tama�o)
{
	//Dibujar el rastrillo en la coordenada (x,y)
}

void Rastrillo::contacto(int _da�oImpacto)
{
	//detectar si hay un zombie en la coordenada (x,y)
	//Si hay un zombie en su coordenada reducir la salud del zombie en da�oImpacto y destruir rastrillo
}

void Rastrillo::destruirse()
{
	estado = "usado";
	//destruir dibujo de rastrillo en pantalla
}
