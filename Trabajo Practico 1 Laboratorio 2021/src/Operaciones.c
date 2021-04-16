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

void MostrarMensajes(char mensajeUno[], char mensajeDos[], char mensajeTres[])
{
	printf("%s \n", mensajeUno);
	printf("%s \n", mensajeDos);
	printf("%s \n", mensajeTres);
}

void MostrarMensaje(char mensajeUno[])
{
	printf("%s \n", mensajeUno);
}


void MostarOperacionesMatematicas(float operandoA, float operandoB,float sumaOperando, float restaOperando, float divisionOperando,
		float multiplicarOperando, int enteroA, int enteroB, float restaOperandoAEnteroA, float restaOperandoBEnteroB,
		unsigned long int factorialOperandoA, unsigned long  int factorialOperandoB)
{
	printf("4. Los resultados son: \n");
	printf("a) La suma de (%.2f+%.2f) es: %.2f \n", operandoA, operandoB, sumaOperando);
	printf("b) La resta de (%.2f-%.2f) es: %.2f \n", operandoA, operandoB, restaOperando);
	if(operandoB!=0)
	{
		printf("c) La division entre (%.2f/%.2f) es: %.2f \n",operandoA, operandoB, divisionOperando);
	}
	else
	{
		printf("No se puede dividir por 0\n");
	}

	printf("d) La multiplicacion de (%.2f*%.2f) es: %.2f\n",operandoA, operandoB, multiplicarOperando);

	if(operandoA>-1&&restaOperandoAEnteroA==0&&operandoA<17)
	{
		printf("e) El factorial del %.2f es: %.2ld \n",operandoA, factorialOperandoA);
	}
	else
	{
		printf("No se puede calcular el factorial de: un Nro negativo o de un Nro que no es entero y en esta calculadora a un Nro mayor a 16\n");
	}

	if(operandoB>-1&&restaOperandoBEnteroB==0&&operandoB<17)
	{

			printf("e) El factorial del %.2f es: %.2ld \n",operandoB, factorialOperandoB);
	}
	else
	{
			printf("No se puede calcular el factorial de un Nro negativo o de un Nro que no es entero y en esta calculadora a un Nro mayor a 16\n");
	}

}


















