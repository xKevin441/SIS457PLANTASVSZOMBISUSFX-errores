#pragma once
#include "Planta.h"
class Cactus : public planta
{
	bool espina = true;
	int dañoEspina = 40;
	float velocidadRecarga = 0.20;
	float rangoEspinaX = 800.0f;
public:
	//constructores
	Cactus() {};

	//metodos accesores
	int getEspina() { return espina; }
	void setEspina(int _espina) { espina = _espina; }

	int getDañoEspina() { return dañoEspina; }
	void setDañoEspina(int _dañoEspina) { dañoEspina = _dañoEspina; }

	float getVelocidadRecarga() { return velocidadRecarga; }
	void setVelocidadRecarga(float _velocidadRecarga) { velocidadRecarga = _velocidadRecarga; }

	float getRangoEspinaX() { return rangoEspinaX; }
	void setRangoEspinaX(float _rangoEspinaX) { rangoEspinaX = _rangoEspinaX; }

	//metodos propios
	void disparar(bool espina, float rangoEspinaX);
	void recargar(float velocidadRecarga, bool espina);
	void colocarCactus(float posicionX, float posicionY);
};

