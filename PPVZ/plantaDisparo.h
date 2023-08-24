#pragma once
#include "Planta.h"

class plantaDisparo : public planta
{
private:
    int dañoDisparo;
    int alcanceDisparo;

public:
    plantaDisparo();

    //Metodos accesores
    void setDañoDisparo(int _dañoDisparo) { dañoDisparo = _dañoDisparo; };
    int getDañoDisparo() { return dañoDisparo; }

    void setAlcanseDisparo(int _alcanseDisparo) { alcanseDisparo = _alcanseDisparo; };
    int getAlcanseDisparo() { return alcanseDisparo; }

    //Metodos directos
    virtual void Disparar(float posX, float posY);


};