#pragma once
#include"lanzagisantes.h"
class lanzaguizanteshielo : public lanzagizantes
{
	private;
	int color;
	int tipo;
	int daño;
	int congelar;
	public;
	void setdaño(int _daño) { daño = _daño; };
	float getdaño() { return daño; }
	void setcongelar(int _congelar) { congelar = _congelar; };
	float getcongelar() { return congelar; }
	void settipo(int _ice) { ice = _ice; };
	float gettipo() { return ice; }
};

