#pragma once
#include "Planta.h"
class Coltapulta : public planta
{
	bool col = true;
	int da�oCol = 40;
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

	int getDa�oCol() { return da�oCol; }
	void setDa�oCol(int _da�oCol) { da�oCol = _da�oCol; }

	float getVelocidadRecarga() { return velocidadRecarga; }
	void setVelocidadRecarga(float _velocidadRecarga) { velocidadRecarga = _velocidadRecarga; }

	float getRangoColX() { return rangoColX; }
	void setRangoColX(float _rangoColX) { rangoColX = _rangoColX; }

	//metodos propios
	void disparar(bool col, float rangoColX);
	void recargar(float velocidadRecarga, bool col);
	void colocarColtapulta(float posicionX, float posicionY);
};

