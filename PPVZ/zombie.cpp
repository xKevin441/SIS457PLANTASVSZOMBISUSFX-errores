#include "Zombie.h"
#include <iostream>
using namespace std;

Zombie::Zombie()
{
	posicionX = 50.0f;
	posicionY = 10.0f;
	color = "verde";
	vida = 500;
	tama�o = 15.0f;
	velocidad_movimiento = 5;
	velocidad_ataque = 8;
	da�o = 25;
	da�o_planta = 20;
}

Zombie::Zombie(float _posicionX, float _posicionY, string _color, int _vida, float _tama�o, int _velocidad_movimiento, int _velocidad_ataque, int _da�o, int _da�o_planta)
{
	posicionX = _posicionX;
	posicionY = _posicionY;
	color = _color;
	vida = _vida;
	tama�o = _tama�o;
	velocidad_movimiento = _velocidad_movimiento;
	velocidad_ataque = _velocidad_ataque;
	da�o = _da�o;
	da�o_planta = _da�o_planta;
}

void Zombie::Caminar(float posicionX, float posicionY, int velocidad_movimiento)
{
	float caminar = posicionX + velocidad_movimiento;
}

void Zombie::Atacar(int velocidad_ataque, int da�o)
{
	int atacar = velocidad_ataque + da�o;
}

void Zombie::Morir(int vida)
{
	vida = 0;
	cout << "El zombie muri�" << endl;
}

void Zombie::recibirDa�o(int vida, int da�o_planta)
{
	vida = vida - da�o_planta;
}

void Zombie::explotarCabeza(int vida)
{
	vida = 0;
	cout << "El zombie muri�" << endl;
}
