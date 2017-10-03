#include "Funcionario.h"
#include<iostream>

Funcionario::Funcionario()
{
    //ctor
}

Funcionario::Funcionario(int mat, string n, float sal)
{
    setMatricula(mat);
    setSalario(sal);
    setNome(n);
}

void Funcionario::setMatricula(int mat)
{
    if(mat<0){
        cout << "Erro de Matricula!!\n";
    }else{
        matricula = mat;
    }
}

int Funcionario::getMatricula()
{
    return matricula;
}

void Funcionario::setNome(string n)
{
    nome = n;
}

string Funcionario::getNome()
{
    return nome;
}

void Funcionario::setSalario(float sal)
{
    if(sal<0){
        cout << "Erro no Salario!!\n";
    }else{
        salario = sal;
    }
}

float Funcionario::getSalario()
{
    return salario;
}
