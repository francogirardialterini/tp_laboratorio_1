/*
 * Operaciones.c
 *
 *  Created on: 27 mar. 2021
 *      Author: Franco
 */
#include "Operaciones.h"

float Sumar(float numeroUno,float numeroDos)
{	float suma;
	suma= numeroUno + numeroDos;
	return suma;
}

float Restar(float numeroUno,float numeroDos)
{
	float resta;
	resta= numeroUno - numeroDos;
	return resta;
}

float Dividir(float numeroUno,float numeroDos)
{
	float division;
	division= numeroUno / numeroDos;
	return division;
}

float Multiplicar(float numeroUno,float numeroDos)
{
	float multiplicacion;
	multiplicacion= numeroUno * numeroDos;
	return multiplicacion;
}

unsigned long int Factorial(float numero)
{	unsigned long int acumuladorFactorial;
	int i;
	acumuladorFactorial=1;
	for(i=numero;i>1;i--)
	{
		acumuladorFactorial= Multiplicar(acumuladorFactorial,i);
	}
	return acumuladorFactorial;
}


