#include "lanzaguizanteshielo.h"
class lanzaguizanteshielo::lanzaguizanteshielo
{
	color = "white";
	tipo = "ice";
	daño = "lanzar bolas de nieve";
	congelar = "al inpactar con el zombie un retrazo de 0.2 segundos";
};
void lanzaguizanteshielo::daño()
{
	daño += congelar;
}

void lanzaguizanteshielo::congelar()
{
	cout << "crear un retraso";
}

void lanzaguizanteshielo::tipo()
{
	cout<<"planta de tipo hielo"
}
