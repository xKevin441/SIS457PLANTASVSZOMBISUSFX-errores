#include "lanzaguizanteshielo.h"
class lanzaguizanteshielo::lanzaguizanteshielo
{
	color = "white";
	tipo = "ice";
	da�o = "lanzar bolas de nieve";
	congelar = "al inpactar con el zombie un retrazo de 0.2 segundos";
};
void lanzaguizanteshielo::da�o()
{
	da�o += congelar;
}

void lanzaguizanteshielo::congelar()
{
	cout << "crear un retraso";
}

void lanzaguizanteshielo::tipo()
{
	cout<<"planta de tipo hielo"
}
