#pragma once
#include"guisantetralladora.h"
#include"lanzaguizanteshielo.h"
using namespace std;
class grisol :public lanzaguisantes
{
private:
	int daño;
	int morir;
	int revivir;
	int tipo_fuego;
	string color;
	int vida;
	int costo;
	int atacar;
	public;
	void septipo_fuego(int _tipo_fuego) { tipo_fuego = _tipo_fuego; };
	float gettipo_fuego() { return tipo_fuego; }
	void setatacar(int _atacar) { atacar = _atacar; };
	float getatacar() { return atacar; }
	void setrevivir(int _revivir) { revivir = _revivir; };
	float getrevivir() { return revivir; }
	void setcolor(string _color) { color = _color; };
	float getcolor() { return color; }
	void setcosto(int costo) { costo = _costo; };
	float getcosto() { return costo; }
	void setvida(int _vida) { vida = _vida; };
	float getvida() { return vida; }
};

