#include "ZombiCajita.h"

void ZombieCajita::ExplocionC()
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
	for (int i = 0; i = estado; i++)
	{
		vida += vida * Explicion;
		vida -= vida * 0;
	}
	for (int i = 0; i <= vida; i--)
	{
		vida -= vida - estado;
	}
}
