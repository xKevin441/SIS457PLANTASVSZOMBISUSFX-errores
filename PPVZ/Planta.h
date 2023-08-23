#pragma once
#include <iostream>
#include <string>
using namespace std;

class planta
{
protected:
    string nombre;
    float posicionX;
    float posicionY;
    int vida;
    int costoSol;
    float velocidadAtaque;
    int rangoAtaque;
    bool estado;
    int da�o;
    int velocidadMovimientoEs;

public:
    planta();
    //Metodos accesores
    void setNombre(string _nombre) { nombre = _nombre; };
    string getNombre() { return nombre; }

    void setPosicionX(float _posicionX) { posicionX = _posicionX; };
    float getPosicionX() { return posicionX; }

    void setPosicionY(float _posicionY) { posicionY = _posicionY; };
    float getPosicionY() { return posicionY; }

    void setVida(int _vida) { vida = _vida; };
    int getVida() { return vida; }

    void setCostoSol(int _costoSol) { costoSol = _costoSol; };
    int getCostoSol() { return costoSol; }

    void setVelocidadAtaque(float _velocidadAtaque) { velocidadAtaque = _velocidadAtaque; };
    float getVelocidadAtaque() { return velocidadAtaque; }

    void setRangoAtaque(int _rangoAtaque) { rangoAtaque = _rangoAtaque; };
    int getRangoAtaque() { return rangoAtaque; }

    void setEstado(bool _estado) { estado = _estado; };
    bool getEstado() { return estado; }

    void setDa�o(int _da�o) { da�o = _da�o; };
    int getDa�o() { return da�o; }

    void setVelocidadMovimientoEs(int _velocidadMovimientoEs) { velocidadMovimientoEs = _velocidadMovimientoEs; };
    int getVelocidadMovimientoEs() { return velocidadMovimientoEs; }

    //Metodos directos
    virtual void movimientoEstatico();
    virtual void recirbirDanio(int danioRecibido);
    virtual void atacar();
    virtual void morir();

};
   