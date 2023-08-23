#pragma once
#include"lanzagisantes.h"
class guisantetralladora : public lanzagisantes
{
	private;
	int posXafectada;
	public;
	guisantetralladora() { posXafectada = 50%}
	void setlanzatralladora(int _posXafectada) { posXafectada = _posXafectada; };
	int  getlanzatralladora() { return posXafectada; }
	void sepvelocidad(int _posXafectada) { posXafectada = _posXafectada; };
	int  getvolocidad() { return posXafectada; }
};

