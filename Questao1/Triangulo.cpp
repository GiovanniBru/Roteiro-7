#include "Triangulo.h"
#include"FiguraGeometrica.h"
#include<iostream>

using namespace std;

Triangulo::Triangulo()
{
    //ctor
}

Triangulo::Triangulo(string n, int b, int h)
{
	setNome(n);
	setBaseTri(b);
	setAlturaTri(h);
}

void Triangulo::setBaseTri(int b){
	setNome("Triangulo");

	if(b < 0){
		cout << "base negativa nao existe" << endl;
	}else if(b == 0){
			cout << "Nao existe area" << endl;
		}else{
			BaseTri = b;
			}
}

int Triangulo::getBaseTri(){
	return BaseTri;
}

void Triangulo::setAlturaTri(int h){
	if(h < 0){
		cout << "altura negativa nao existe" << endl;
	}else if(h == 0){
			cout << "Nao existe area" << endl;
		}else{
			AlturaTri = h;
			}
}

int Triangulo::getAlturaTri(){
	return AlturaTri;
}

float Triangulo::CalcularArea(){
	return ((BaseTri * AlturaTri) / 2);
}

Triangulo::~Triangulo()
{
    //dtor
}
