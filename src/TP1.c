/*
 ============================================================================
Franco Girardi Alterini Division f
Trabajo Practico N° 1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"
#include <windows.h>


int main(void)
{
	char pregunta;
	int opcion;
	float operandoA;
	float operandoB;
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

	do {
		printf("Escoja una de las opciones del N°1 al 5\n");
		if(banderaOperandoA==0)
		{
			printf("1. Ingresar 1er operando (A=x)\n");
		}
		else
		{
			printf("Se ingreso el 1er operando y es (A=%.2f) \n", operandoA);
		}

		if(banderaOperandoB==0)
		{
			printf("2. Ingresar 2do operando (B=y)\n");
		}
		else
		{
			printf("2. El 2do operando es (B=%.2f)\n",operandoB);
		}

		printf("3. Calcular todas las operaciones\n");
		/*printf("a) Calcular la suma (A+B)\n");
		printf("b) Calcular la resta (A-B)\n");
		printf("c) Calcular la division (A/B)\n");
		printf("d) Calcular la multiplicacion (A*B)\n");
		printf("e) Calcular el factorial (A!)\n");*/
		printf("4. Informar resultados\n");
		/*printf("a) “El resultado de A+B es: r”\n");
		printf("b) “El resultado de A-B es: r”\n");
		printf("c) “El resultado de A/B es: r” o “No es posible dividir por cero”\n");
		printf("d) “El resultado de A*B es: r”\n");
		printf("e) “El factorial de A es: r1 y El factorial de B es: r2”\n"); */
		printf("5. Salir\n");
		//scanf("%d",&opcion);
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
					printf("3. Calculando todas las operaciones, ingrese 4 para ver los resultados\n");
					sumaOperando= Sumar(operandoA, operandoB);
					restaOperando=Restar(operandoA, operandoB);
					if(operandoB!=0)
						{
							divisionOperando=Dividir(operandoA, operandoB);
						}

					multiplicarOperando= Multiplicar(operandoA, operandoB);
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
					printf("3. Ingrese las opciones 1 y 2 para poder realizar los calculos\n");
				}

				break;
			case 4:
				if(banderaCalculandoOperanciones==1)
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

					if(operandoA>-1)
					{
						printf("e) El factorial del %.2f es: %.2ld \n",operandoA, factorialOperandoA);
					}
					else
					{
						printf("No se puede calcular el factorial de un N° negativo\n");
					}

					if(operandoB>-1)
					{
						printf("e) El factorial del %.2f es: %.2ld \n",operandoB, factorialOperandoB);
					}
					else
					{
						printf("No se puede calcular el factorial de un N° negativo\n");
					}
				}
				else
				{
					printf("Primero ingrese las opciones 1, 2 y 3 para calcular las operaciones \n");
				}

				break;
			case 5:

				printf("Usted esta saliendo.!!! \n");
				break;
		}
	} while (opcion!=5);

	system("pause");

	return EXIT_SUCCESS;


}
