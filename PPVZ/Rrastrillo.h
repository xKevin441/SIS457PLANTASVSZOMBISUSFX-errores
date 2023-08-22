#pragma once
#include <iostream>
using namespace std;
class Rastrillo
{
private:
	string material;
	string color;
	int tama�o;
	float posicionX;
	float posicionY;
	int costo;
	int da�oImpacto;
	string estado;//disponible, en uso o usado

public:
	//Metodos constructores

	//Metodos accesores
	void setMaterial(string _material) { material = _material; }
	void setColor(string _color) { color = _color; }
	void setPosicionX(float _posicionX) { posicionX = _posicionX; }
	void setPosicionY(float _posicionY) { posicionY = _posicionY; }
	void setCosto(int _costo) { costo = _costo; }
	void setDa�oImpacto(int _da�oImpacto) { da�oImpacto = _da�oImpacto; }

	string getMaterial() { return material; }
	string getColor() { return color; }
	float getPosicionX() { return posicionX; }
	float getPosicionY() { return posicionY; }
	int getCosto() { return costo; }
	int getDa�oImpacto() { return da�oImpacto; }

	//Metodos comunes
	void spawnear(float posicionX, float posicionY, int tama�o);
	void contacto(int _da�oImpacto);
	void destruirse();
};
