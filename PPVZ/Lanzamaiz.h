#pragma once
#include "Planta.h"
class Lanzamaiz : public planta
{
	bool maiz = true;
	int da�oMaiz = 50;
	float velocidadRecarga = 0.30;
	float rangoMaizX = 800.0f;
public:
	//constructores
	Lanzamaiz() {};

	//metodos accesores
	int getMaiz() { return maiz; }
	void setMaiz(int _maiz) { maiz = _maiz; }

	int getDa�oMaiz() { return da�oMaiz; }
	void setDa�oMaiz(int _da�oMaiz) { da�oMaiz = _da�oMaiz; }

	float getVelocidadRecarga() { return velocidadRecarga; }
	void setVelocidadRecarga(float _velocidadRecarga) { velocidadRecarga = _velocidadRecarga; }

	float getRangoMaizX() { return rangoMaizX; }
	void setRangoMaizX(float _rangoMaizX) { rangoMaizX = _rangoMaizX; }

	//metodos propios
	void disparar(bool maiz, float rangoMaizX);
	void recargar(float velocidadRecarga, bool maiz);
	void colocarLanzamaiz(float posicionX, float posicionY);
};

