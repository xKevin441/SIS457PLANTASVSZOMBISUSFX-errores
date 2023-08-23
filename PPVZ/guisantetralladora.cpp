#include "guisantetralladora.h"
 {         velocidad = 100 %
	       posXafectada = 0.0F
}
void guisantetralladora::velocidad()
{
	cout << "mayor velocidad mayor daño";
}

int guisantetralladora::posXafectada()
{
	posXafectada += velocidad;
	cout << "mayor poder de disparo";
	return 0;
}
