#include "ZombiPlayero.h"

void ZombiPlayero::avance()
{
	direccionX = 1;
	for (int i = 0; i < 11; i++) {
		posicionX += direccionX * velocidad;
	}
	direccionX = -1;
	direccionY = -1;
	for (int i = 0; i < 11; i++) {
		posicionX += direccionX * velocidad;
		posicionY += direccionY * velocidad;
	}
	direccionX = 1;
	direccionY = 0;
	for (int i = 0; i < 11; i++) {
		posicionX += direccionX * velocidad;
	}
}
