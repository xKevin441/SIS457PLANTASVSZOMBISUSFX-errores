#include "ZombiBuzo.h"

void ZombieBuzo::nadar()
{
	direccionX = 1;
	for (int i = 0; i < 15; i++) {
		posicionX += direccionX * velocidad;
	}
	direccionX = -1;
	direccionY = -1;
	for (int i = 0; i < 15; i++) {
		posicionX += direccionX * velocidad;
		posicionY += direccionY * velocidad;
	}
	direccionX = 1;
	direccionY = 0;
	for (int i = 0; i < 15; i++) {
		posicionX += direccionX * velocidad;
	}
	
}
