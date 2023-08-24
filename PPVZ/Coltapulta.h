#pragma once
#include "Planta.h"
class Coltapulta : public planta
{
	bool col = true;
	int dañoCol = 40;
	float velocidadRecarga = 0.30;
	float rangoColX = 800.0f;
	float posicionX = 80.0f;
	float posicionY = 80.0f;
public:
	//constructores
	Coltapulta() {};

	//metodos accesores
	int getCol() { return col; }
	void setCol(int _col) { col = _col; }

	int getDañoCol() { return dañoCol; }
	void setDañoCol(int _dañoCol) { dañoCol = _dañoCol; }

	float getVelocidadRecarga() { return velocidadRecarga; }
	void setVelocidadRecarga(float _velocidadRecarga) { velocidadRecarga = _velocidadRecarga; }

	float getRangoColX() { return rangoColX; }
	void setRangoColX(float _rangoColX) { rangoColX = _rangoColX; }

	//metodos propios
	void disparar(bool col, float rangoColX);
	void recargar(float velocidadRecarga, bool col);
	void colocarColtapulta(float posicionX, float posicionY);
};

