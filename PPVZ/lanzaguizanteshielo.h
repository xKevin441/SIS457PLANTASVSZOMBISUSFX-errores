#pragma once
#include"lanzagisantes.h"
class lanzaguizanteshielo : public lanzagizantes
{
	private;
	int color;
	int tipo;
	int da�o;
	int congelar;
	public;
	void setda�o(int _da�o) { da�o = _da�o; };
	float getda�o() { return da�o; }
	void setcongelar(int _congelar) { congelar = _congelar; };
	float getcongelar() { return congelar; }
	void settipo(int _ice) { ice = _ice; };
	float gettipo() { return ice; }
};

