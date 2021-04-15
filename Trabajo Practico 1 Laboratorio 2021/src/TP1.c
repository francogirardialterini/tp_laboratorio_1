/*
 ============================================================================
Franco Girardi Alterini Division f
Trabajo Practico N° 1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>
#include "Operaciones.h"



int main(void)
{

	int opcion;
	float operandoA;
	int enteroA;
	float operandoB;
	int enteroB;
	float restaOperandoAEnteroA;
	float restaOperandoBEnteroB;
	float sumaOperando;
	float restaOperando;
	float divisionOperando;
	float multiplicarOperando;
	unsigned long int factorialOperandoA;
	unsigned long int factorialOperandoB;
	setbuf(stdout,NULL);
	int banderaOperandoA;
	int banderaOperandoB;
	int banderaCalculandoOperanciones;
	banderaOperandoB=0;
	banderaOperandoA=0;
	banderaCalculandoOperanciones=0;


	printf("Bienvenido usuario\n");
	do {
		system("color 9");
		MostrarMensaje("Escoja una de las opciones del Nro 1 al 5");

		if(banderaOperandoA==0)
		{
			MostrarMensaje("1. Ingresar 1er operando (A=x)");
		}
		else
		{
			printf("Se ingreso el 1er operando y es (A=%.2f) \n", operandoA);
		}
		if(banderaOperandoB==0)
		{
			MostrarMensaje("2. Ingresar 2do operando (B=y)");
		}
		else
		{
			printf("2. El 2do operando es (B=%.2f)\n",operandoB);
		}
		MostrarMensajes("3. Calcular todas las operaciones", "4. Informar resultados", "5. Salir");
		opcion=PedirEntero("Error,Ingrese una opcion del 1 al 5", 1, 5);
		system("cls");
 		switch (opcion)
		{
			case 1:
				operandoA=PedirFlotante("1. Ingrese el primer operando A:");
				banderaOperandoA=1;
				system("cls");
				break;
			case 2:
				operandoB=PedirFlotante("2. Ingrese el segundo operando B: ");
				banderaOperandoB=1;
				system("cls");
				break;
			case 3:
				if(banderaOperandoA==1&&banderaOperandoB==1)
				{
					banderaCalculandoOperanciones=1;
					banderaOperandoA=0;
					banderaOperandoB=0;
					MostrarMensaje("3. Calculando todas las operaciones, ingrese 4 para ver los resultados");
					sumaOperando=Sumar(operandoA, operandoB);
					restaOperando=Restar(operandoA, operandoB);
					if(operandoB!=0)
						{
							divisionOperando=Dividir(operandoA, operandoB);
						}
					multiplicarOperando= Multiplicar(operandoA, operandoB);
					enteroA=operandoA;
					enteroB=operandoB;
					restaOperandoAEnteroA=operandoA-enteroA;
					restaOperandoBEnteroB=operandoB-enteroB;
					if(operandoA>-1)
					{
						factorialOperandoA=Factorial(operandoA);
					}
					if(operandoB>-1)
					{
						factorialOperandoB=Factorial(operandoB);
					}
				}
				else
				{
					MostrarMensaje("3. Ingrese las opciones 1 y 2 para poder realizar los calculos");
				}
				break;
			case 4:
				if(banderaCalculandoOperanciones==1)
				{	system("color 2f");
					MostarOperacionesMatematicas(operandoA, operandoB, sumaOperando, restaOperando, divisionOperando, multiplicarOperando, enteroA, enteroB,
												restaOperandoAEnteroA, restaOperandoBEnteroB, factorialOperandoA, factorialOperandoB);
					banderaCalculandoOperanciones=0;
				}
				else
				{
					MostrarMensaje("Primero ingrese las opciones 1, 2 y 3 para calcular las operaciones");
				}
				system("pause");
				system("cls");
				break;
			case 5:
				system("color 4f");
				MostrarMensaje("Usted esta saliendo.!!!");
				break;
		}
	} while (opcion!=5);
	system("pause");

	return EXIT_SUCCESS;


}
