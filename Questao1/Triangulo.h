#ifndef TRIANGULO_H
#define TRIANGULO_H
#include"FiguraGeometrica.h"

using namespace std;

class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo();
        virtual ~Triangulo();
        Triangulo(string, int, int);

        void setBaseTri(int);
        int getBaseTri();
        void setAlturaTri(int);
        int getAlturaTri();

        float CalcularArea();

    protected:

    private:
        int BaseTri, AlturaTri;
};

#endif // TRIANGULO_H
