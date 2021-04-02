/*
 * Operaciones.c
 *
 *  Created on: 27 mar. 2021
 *      Author: Franco
 */
#include "Operaciones.h"


int PedirEntero(char mensajeError[], int minimo, int maximo)
{
	int numeroIngresado;
	scanf("%d",&numeroIngresado);
	while (numeroIngresado<minimo || numeroIngresado>maximo)
	{
		printf("\n %s", mensajeError);
		scanf("%d",&numeroIngresado);
	}
	return numeroIngresado;
}

float PedirFlotante(char mensaje[])
{
	float numeroIngresado;
	printf(mensaje);
	scanf("%f",&numeroIngresado);
	return numeroIngresado;
}


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

	if(numeroUno==0 || numeroDos==0)
	{
		multiplicacion=0;
	}
	else
	{
		multiplicacion= numeroUno * numeroDos;
	}

	return multiplicacion;
}

unsigned long int Factorial(float numero)
{	unsigned long int acumuladorFactorial;
	int i;
	acumuladorFactorial=1;
	if(numero>0)
	{
		for(i=numero;i>1;i--)
		{
			acumuladorFactorial= Multiplicar(acumuladorFactorial,i);
		}
	}
	return acumuladorFactorial;
}


