#pragma once
#include "Zombie.h"
class ZombieAbanderado : public Zombie
{

private:
	string vestimenta;

public:
	//constructor
	ZombieAbanderado() {};

	//metodos accesores
	void setVestimenta(string _vestimenta) { vestimenta = _vestimenta; };
	string getVestimenta() { return vestimenta; }

	//metodos propios
	void revivir();

};

