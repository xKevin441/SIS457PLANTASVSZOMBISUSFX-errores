#pragma once
#include <iostream>
using namespace std;
class Pala
{
private:
	float posicionX;
	float posicionY;
	string color;
	int tama�o;
	bool estadoUso; //cuando la pala esta seleccionada para borrar una planta cambiar esta variable a true

public:
	//Metodos constructores
	Pala();
	Pala(float _posicionX, float _posicionY, string _color, int _tama�o);

	//Metodos accesores
	void setPosicionX(float _posicionX) { posicionX = _posicionX; }
	void setPosicionY(float _posicionY) { posicionY = _posicionY; }
	void setColor(string _color) { color = _color; }
	void setTama�o(int _tama�o) { tama�o = _tama�o; }
	void setEstadoUso(bool _estadoUso) { estadoUso = _estadoUso; }

	float getPosicionX() { return posicionX; }
	float getPosicionY() { return posicionY; }
	string getColor() { return color; }
	int getTama�o() { return tama�o; }
	bool getEstadoUso() { return estadoUso; }

	//Metodos comunes
	void cambiarEstado();
	void desplazar(float desplazamientoX, float desplazamientoY);
	void quitarPlanta(float _posicionX, float _posicionY);
};
