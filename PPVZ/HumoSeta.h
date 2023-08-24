#pragma once
#include "PlantaDisparo.h"
class HumoSeta : public PlantaDisparo
{
private:
	int humoDisparo;

public:
	HumoSeta() { humoDisparo = 0; }

	//Metodos accesores
	void setHumoDisparo(int _humoDisparo) { humoDisparo = _humoDisparo; }
	float getHumoDisparo() { return humoDisparo; }

	void disparar(float posX, float posY) override;
};