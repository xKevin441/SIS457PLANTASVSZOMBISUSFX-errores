#include "lanzagisantes.h"
lanzagisantes::lanzagisantes()
{
	color ="green";
	expulsar ="guisantes";
	posiY_posX ="posicion estatica en un solo punto";
	da�o_de_ataque ="atacar baja vida de zombie por ataque";
	tiempo ="tiempo de esperar antes de cargar una nueva planta de la misma especie";
	recarga ="tiempo de espera de expulsar";
	morir ="da�o que resive de los zombies";
	costo ="costo de soles 50";
	alcanze ="posX=9";
	resivir_da�o ="recivir solo da�o de los zombies";
}
void color()
{
	coot << "color verde";
}

void expulsar::da�o_de_ataque(int da�o)
{
	expulsar += da�o_de_ataque;
}
void posY_posX()
{
	cout << "una posicion estatica y en un solo punto";
}

void da�o_de_ataque :: alcanze(int alcance)
{
	da�o_de_ataque += alcanze;
}

 void recarga :: costo(int menos plantas)
{
	recarga-=costo
}

void morir()
{
	cout<<"da�o resivido"
}

void costo::soles(int soles)
{
	costo -= soles;

}

void alcanze()
{
	posiX += da�o_de_ataque;
}

void resivir_da�o ::morir(int morir)
{
	resivir_da�o += morir;
}
