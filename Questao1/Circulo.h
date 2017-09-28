#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

using namespace std;

class Circulo : public FiguraGeometrica{
    private:
        int raio;
        const float pi = 3.14;
    public:
        Circulo();
        Circulo(string, int);

        void setRaio(int);
        int getRaio();

        float getPI();

        float CalcularArea();

};

#endif
