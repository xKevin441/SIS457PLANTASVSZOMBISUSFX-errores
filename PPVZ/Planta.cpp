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
	daño = 0;
	velocidadMovimientoEs = 0;
}

void planta::movimientoEstatico()
{

}

void planta::recirbirDanio(int danioRecibido)
{
}

void planta::atacar()
{
}

void planta::morir()
{
}
