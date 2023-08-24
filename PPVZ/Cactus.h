#pragma once
#include "Planta.h"
class Cactus : public planta
{
	bool espina = true;
	int da�oEspina = 40;
	float velocidadRecarga = 0.20;
	float rangoEspinaX = 800.0f;
public:
	//constructores
	Cactus() {};

	//metodos accesores
	int getEspina() { return espina; }
	void setEspina(int _espina) { espina = _espina; }

	int getDa�oEspina() { return da�oEspina; }
	void setDa�oEspina(int _da�oEspina) { da�oEspina = _da�oEspina; }

	float getVelocidadRecarga() { return velocidadRecarga; }
	void setVelocidadRecarga(float _velocidadRecarga) { velocidadRecarga = _velocidadRecarga; }

	float getRangoEspinaX() { return rangoEspinaX; }
	void setRangoEspinaX(float _rangoEspinaX) { rangoEspinaX = _rangoEspinaX; }

	//metodos propios
	void disparar(bool espina, float rangoEspinaX);
	void recargar(float velocidadRecarga, bool espina);
	void colocarCactus(float posicionX, float posicionY);
};

