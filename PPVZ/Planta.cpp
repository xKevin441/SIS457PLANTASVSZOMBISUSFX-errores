#include "Planta.h"

planta::planta()
{
	posicionX = 0.0f;
	posicionY = 0.0f;
	vida = 100;
	costoSol = 0;
	velocidadAtaque = 0;
	rangoAtaque = 0;
	estado = true;
	da�o = 0;
	velocidadMovimientoEs = 0;
}

void planta::movimientoEstatico()
{
	velocidadMovimientoEs = 2.0;
}

void planta::recirbirDanio(int danioRecibido)
{
	vida -= danioRecibido;
}

void planta::atacar()
{
	velocidadAtaque = 10;
	rangoAtaque = 1;
	da�o = 20;
}

void planta::morir()
{
	estado = false;
}
