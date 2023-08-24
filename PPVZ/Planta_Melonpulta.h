#pragma once
#include "Planta.h"
class Planta_Melonpulta : public planta
{
	bool sandia = true;
	int da�oSandia = 150;
	float velocidadRecarga = 0.80;
	float rangoSandiaX = 800.0f;

public:
	//constructores
	Planta_Melonpulta() {};


	//metodos accesores
	int getSandia() { return sandia; }
	void setSandia(int _sandia) { sandia = _sandia; }

	int getDa�oSandia() { return da�oSandia; }
	void setDa�oSandia(int _da�oSandia) { da�oSandia = _da�oSandia; }

	float getVelocidadRecarga() { return velocidadRecarga; }
	void setVelocidadRecarga(float _velocidadRecarga) { velocidadRecarga = _velocidadRecarga; }

	float getRangoSandiaX() { return rangoSandiaX; }
	void setRangoSandiaX(float _rangoSandiaX) { rangoSandiaX = _rangoSandiaX; }

	//metodos propios
	void disparar(bool sandia, float rangoSandiaX);
	void recargar(float velocidadRecarga, bool sandia);
	void colocarPlanta_Melonpulta(float posicionX, float posicionY);
};

