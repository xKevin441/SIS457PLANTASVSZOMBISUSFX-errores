#pragma once
#include "Planta.h"
class Pinchohierba : public planta
{
    string nombre = "Pinchohierba";
    float posicionX = 250.0f;
    float posicionY = 250.0f;
public:
    //constructores
    Pinchohierba() {};

    //metodos accesores
    string getNombre() { return nombre; }
    void setNombre(string _nombre) { nombre = _nombre; }

    void setPosicionX(float _posicionX) { posicionX = _posicionX; };
    float getPosicionX() { return posicionX; }

    void setPosicionY(float _posicionY) { posicionY = _posicionY; };
    float getPosicionY() { return posicionY; }

    //metodos propios
    void atacar();
    void colocarPinchos(float posicionX, float posicionY);
};

