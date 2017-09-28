#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica()
{
    //ctor
}

void FiguraGeometrica::setNome(string n)
{
    nome = n;
}

string FiguraGeometrica::getNome()
{
    return nome;
}

float FiguraGeometrica::CalcularArea()
{

}

FiguraGeometrica::~FiguraGeometrica()
{
    //dtor
}
