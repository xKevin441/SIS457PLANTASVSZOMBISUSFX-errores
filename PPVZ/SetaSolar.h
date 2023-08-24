#pragma once
#include "PlantaGeneradoraSoles.h"
class SetaSolar :
    public PlantaGeneradoraSoles
{
private:
    string tamaño;
    string color;
    int tiempoVida;


public:
    //Metodos constructores
    SetaSolar();

    //Metodos accesores
    void setTamaño(_tamaño) { tamaño = _tamaño; }
    string getTamaño(){return tamaño; }

    //Metodos comunes
    void cambiarTamaño();
    void animarMovimiento();

};