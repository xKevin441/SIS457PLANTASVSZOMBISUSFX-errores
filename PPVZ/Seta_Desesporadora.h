#pragma once
#include "PlantaDisparo.h"
class Seta_Desesporadora : public PlantaDisparo
{
private:
	int nocheDisparo;

public:
	Seta_Desesporadora() { nocheDisparo = 0; }

	//Metodos accesores
	void setNocheDisparo(int _nocheDisparo) { nocheDisparo = _nocheDisparo; }
	float getNocheDisparo() { return nocheDisparo; }

	void disparar(float posX, float posY) override;
};