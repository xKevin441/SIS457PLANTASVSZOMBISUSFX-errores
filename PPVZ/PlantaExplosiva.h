#pragma once
#include "Planta.h"
class PlantaExplosiva : public planta
{
private:
	int da�oExplosion;
	int tiempoExplosion;

public:
	PlantaExplosiva();

	//Metodos accesores
	void setDa�oExplosion(int _da�oExplosion) { da�oExplosion = _da�oExplosion; };
	int getDa�oExplosion() { return da�oExplosion; }

	void setTiempoExplosion(int _tiempoExplosion) { tiempoExplosion = _tiempoExplosion; };
	int getTiempoExplosion() { return tiempoExplosion; }

	//Metodos directos
	virtual void explotar(float posX, float posY);

};

