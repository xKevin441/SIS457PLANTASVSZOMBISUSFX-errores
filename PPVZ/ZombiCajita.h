#pragma once
#include "Zombie.h"
class ZombieCajita : public Zombie
{
	int ExplocionCajita = 150;
public:

	ZombieCajita() {};
	ZombieCajita(string _nombre) : Zombie(_nombre) {};


	int getNivelDa�oC() { return ExplocionCajita; }
	void setNivelDa�oC(int _ExplocionCajita) { ExplocionCajita = _ExplocionCajita; }

	void ExplocionC();
};