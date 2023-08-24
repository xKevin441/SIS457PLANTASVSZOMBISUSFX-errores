#pragma once
#include "PlantaDisparo.h"
class Seta_Miedica : public PlantaDisparo
{
private:
	int proyectilDisparo;

public:
	Seta_Miedica() { proyectilDisparo = 0; }

	//Metodos accesores
	void setProyectilDisparo(int _proyectilDisparo) { proyectilDisparo = _proyectilDisparo; }
	float getProyectilDisparo() { return proyectilDisparo; }

	void disparar(float posX, float posY) override;
};