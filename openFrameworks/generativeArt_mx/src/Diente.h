#ifndef _DIENTE
#define _DIENTE
#include "ofMain.h"

class Diente {
public:

	Diente();
	~Diente();

	void setup();
	void update();
	void draw();
	void dibuja();
	void dibujaBrazo();
	void dibujaCabeza();

	float rad = PI / 180;
	int nb = 80; //numero de brazos
	int nfi = int(ofRandom(30, 45)); //n�mero de filamentos
	float lonyce = 40; //rotaci�n de cada brazo

	float rx[80];
	float ry[80];
	float rz[80];
	float rfy[45];
	float lonyc[45];

	float px = 0, py = 0, lony = 40;
	int diam = 7;
	float pxc = 0, pyc = 0, diaca = 8;

};
#endif