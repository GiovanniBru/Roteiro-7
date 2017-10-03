#ifndef CONSULTOR_H
#define CONSULTOR_H
#include"Funcionario.h"

using namespace std;

class Consultor : public Funcionario
{
    public:
        Consultor();
        Consultor(string, int, float, float);
        float getSalario();
        float getSalario(float);

};

#endif // CONSULTOR_H
