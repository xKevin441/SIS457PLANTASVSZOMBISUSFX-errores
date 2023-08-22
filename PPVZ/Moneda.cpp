#include "Moneda.h"
#include <iostream>
moneda::moneda(string _color, string _material, int _posicionY, int _posicionX, int _tiempoVida)
{
	posicionY = _posicionY;
	posicionX = _posicionX;
	tiempoVida = _tiempoVida;
	color = _color;
	material = _material;
}

void moneda::aparecer(int posSiguienteX, int posSiguienteY)
{
}

void moneda::desaparecer()
{
}
