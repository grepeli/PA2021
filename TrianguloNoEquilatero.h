#pragma once
#include "Figura.h"
ref class TrianguloNoEquilatero :
    public Figura
{
    double Base;
    double Altura;
public:
    TrianguloNoEquilatero(double lado, double altura);
    double CalcularArea();
    double CalcularPerimetro();
};

