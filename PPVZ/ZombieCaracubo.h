#pragma once
#include "Zombie.h"
class ZombieCaracubo : public Zombie
{
private:
	string vestimenta;
	int vidaValde;

public:
	ZombieCaracubo() {}

	//Metodos accesores
	void setVestimenta(string _vestimenta) { vestimenta = _vestimenta; };
	string getVestimenta() { return vestimenta; }

	//Metodos directos
	void resistenciaValde();
};

