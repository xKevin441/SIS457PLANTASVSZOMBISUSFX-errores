#pragma once
#include"Planta.h"
class FlorLuna : public planta
{
	int Potenciar = 30;
public:

	FlorLunar() {};
	FlorLunar(string _nombre) : planta(_nombre) {};

	int getNivelPotenciador() { return Dureza; }
	void setNivelPotenciador(int _Potenciar) { Potenciar = _Potenciar; }

	void Potenciar();
};