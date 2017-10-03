#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include"string"

using namespace std;

class Funcionario
{
    public:
        Funcionario();
        Funcionario(int, string, float);

        void setMatricula(int);
        int getMatricula();

        void setNome(string);
        string getNome();

        void setSalario(float);
        virtual float getSalario();
    protected:

    private:
        float salario;
        int matricula;
        string nome;
};

#endif // FUNCIONARIO_H
