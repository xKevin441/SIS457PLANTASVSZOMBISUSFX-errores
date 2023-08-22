#include <iostream>
#include <string>
using namespace std;
class Zombie
{
private:
	float posicionX;
	float posicionY;
	string color;
	int vida;
	float tama�o;
	int velocidad_movimiento;
	int velocidad_ataque;
	int da�o;
	int da�o_planta;

public:
	Zombie();
	Zombie(float _posicionX, float _posicionY, string _color, int _vida, float _tama�o, int _velocidad_movimiento, int _velocidad_ataque, int _da�o, int _da�o_planta);
	//metodos directos
	void Caminar(float posicionX, float posicionY, int velocidad_movimiento);
	void Atacar(int velocidad_ataque, int da�o);
	void Morir(int vida);
	void recibirDa�o(int vida, int da�o_planta);
	void explotarCabeza(int vida);

	//metodos accesores
	void setPosicionX(float _posicionX) { posicionX = _posicionX; }
	float getPosicionX() { return posicionX; }

	void setPosicionY(float _posicionY) { posicionY = _posicionY; }
	float getPosicionY() { return posicionY; }

	void setColor(string _color) { color = _color; }
	string getColor() { return color; }

	void setVida(int _vida) { vida = _vida; }
	int getVida() { return vida; }


	void setTama�o(float _tama�o) { tama�o = _tama�o; }
	float getTama�o() { return tama�o; }

	void setVelocidad_movimiento(int _velocidad_movimiento) { velocidad_movimiento = _velocidad_movimiento; }
	int getVelocidad_movimiento() { return velocidad_movimiento; }

	void setVelocidad_ataque(int _velocidad_ataque) { velocidad_ataque = _velocidad_ataque; }
	int getVelocidad_ataque() { return velocidad_ataque; }

	void setDa�o(int _da�o) { da�o = _da�o; }
	int getDa�o() { return da�o; }

	void setDa�o_planta(int _da�o_planta) { da�o_planta = _da�o_planta; }
	int getDa�o_planta() { return da�o_planta; }
};


