#pragma once
#include "Planta.h"

class plantaDisparo : public planta
{
private:
    int da�oDisparo;
    int alcanceDisparo;

public:
    plantaDisparo();

    //Metodos accesores
    void setDa�oDisparo(int _da�oDisparo) { da�oDisparo = _da�oDisparo; };
    int getDa�oDisparo() { return da�oDisparo; }

    void setAlcanseDisparo(int _alcanseDisparo) { alcanseDisparo = _alcanseDisparo; };
    int getAlcanseDisparo() { return alcanseDisparo; }

    //Metodos directos
    virtual void Disparar(float posX, float�posY);


};