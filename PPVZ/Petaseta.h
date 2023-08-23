#pragma once
#include "PlantaExplosiva.h"
class Petaseta : public PlantaExplosiva
{
private:
	float areaTotal;

public:
	Petaseta() { areaTotal = 0.0; }

	//Metodos accesores
	void setAreaTotal(float _areaTotal) { areaTotal = _areaTotal; };
	float getAreaTotal() { return areaTotal; }

	void explotar(float posX, float posY) override;

};

