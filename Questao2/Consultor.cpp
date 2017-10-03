#include "Consultor.h"
#include<iostream>
#include"Funcionario.h"

using namespace std;

Consultor::Consultor()
{
    //ctor
}

Consultor::Consultor(string n, int mat, float sal, float percentual)
{
    setNome(n);
    setMatricula(mat);
    setSalario(sal);
    percentual;
}

float Consultor::getSalario(){
	return Funcionario::getSalario() * 1.1;
}

float Consultor::getSalario(float percentual){
	return Funcionario::getSalario() * (1+(percentual/100));
}
