#pragma once
#include"Planta.h"
class Calabaza : public planta
{
	int DurezaCalabaza = 100;
public:

	Calabaza() {};
	Calabaza(string _nombre) : planta(_nombre) {};

	int getNivelDefenza() { return Dureza; }
	void setNivelDefenza(int _DurezaCalabaza) { DurezaCalabaza	= _DurezaCalabaza; }

	void DefenzaCalabaza();
};