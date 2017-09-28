#ifndef QUADRADO_H
#define QUADRADO_H
#include"FiguraGeometrica.h"

using namespace std;

class Quadrado : public FiguraGeometrica
{
    public:
        Quadrado();
        Quadrado(string, int, int);

        void setBaseQua(int);
        int getBaseQua();

        void setAlturaQua(int);
        int getAlturaQua();

        float CalcularArea();

    protected:

    private:
        int baseQua, alturaQua;
};

#endif // QUADRADO_H
