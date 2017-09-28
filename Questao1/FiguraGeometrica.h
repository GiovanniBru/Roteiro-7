#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include<string>

using namespace std;

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        virtual ~FiguraGeometrica();

        void setNome(string);
        string getNome();

        virtual float CalcularArea();

    protected:

    private:
        string nome;
};

#endif // FIGURAGEOMETRICA_H
