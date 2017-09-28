#include <iostream>
#include "FiguraGeometrica.h"
#include "Quadrado.h"

Quadrado::Quadrado()
{

}

Quadrado::Quadrado(string n, int b, int h){
	setNome(n);
	setBaseQua(b);
	setAlturaQua(h);
}

void Quadrado::setBaseQua(int b){

	setNome("Quadrado");

	if(b<0){
		cout << "area invalida" << endl;
	}else{
		baseQua = b;
	}
}

int Quadrado::getBaseQua(){
	return baseQua;
}

void Quadrado::setAlturaQua(int h){
	if(h<0){
		cout << "altura invalida" << endl;
	}else{
		alturaQua = h;
	}
}

int Quadrado::getAlturaQua(){
	return alturaQua;
}

float Quadrado::CalcularArea(){
	return baseQua * alturaQua;
}
