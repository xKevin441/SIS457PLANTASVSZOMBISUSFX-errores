#pragma once
#include "Zombie.h"
class ZombieCaracono : public Zombie
{
private:
	string vestimenta;
	int vidaCono;

public:
	ZombieCaracono() {}

	//Metodos accesores
	void setVestimenta(string _vestimenta) { vestimenta = _vestimenta; };
	string getVestimenta() { return vestimenta; }

	//Metodos directos
	void resistenciaCono();
};
};

