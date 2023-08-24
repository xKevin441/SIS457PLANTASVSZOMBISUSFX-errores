#pragma once
#include "PlantaGeneradoraSoles.h"
class Girasol :
    public PlantaGeneradoraSoles
{
private:
    string colorPetalos;
    string coloHojas;
    string colorRostro;

public:
    //Metodos constructores
    Girasol();

    //Metodos
    void animarMovimiento();
    void spawnear();
   
};