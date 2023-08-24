#pragma once
#include "PlantaGeneradoraSoles.h"
class Birasol :
    public PlantaGeneradoraSoles
{
private:
    string colorPetalos;
    string colorHojas;
    int numCabezas;

public:
    Birasol();

    //Metodos comunes
    void animarMovimiento();
    void spawnear();
    void generarSoles();
};