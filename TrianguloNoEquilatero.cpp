#include "pch.h"
#include "TrianguloNoEquilatero.h"
using namespace System;

TrianguloNoEquilatero::TrianguloNoEquilatero(double base, double altura) {
	Altura = altura;
	Base = base;
	Tipo = "Triangulo No Equilatero";
}
double TrianguloNoEquilatero::CalcularArea() {
	//base * altura / 2
	return (Base * Altura) / 2;
}
double TrianguloNoEquilatero::CalcularPerimetro() {
	return 2*(Math::Sqrt((Base*Base)+(Altura*Altura)))+Base;
}
