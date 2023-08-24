#include "grisol.h"
class grisol::grisol
{
	daño =100%;
	morir ="va a revivir";
	revivir ="al revivir es de tipo fuego";
	tipo_fuego ="lanza piedras en llamas";
	color ="red";
	vida =2000;
	costo =350;
	atacar ="ataca en todas las direcciones al revivir";
};
void grisol::tipo_fuego()
{
	cout << "antes de revivir de tipo ice";
	      tipo_fuego = revivir;
}

void grisol::atacar()
{
	cout << "ataca con bolas de fuego";
}

void grisol::revivir()
{
	revivir += atacar;
}

void grisol::color()
{
	string"cambio de color al revivir";
}
void grisol::costo()
{
	cout << "un unico costo";
}
void grisol::vida()
{
	cout << "vida inicial con 200";
	cout << "vida al revivir de 350";
}

