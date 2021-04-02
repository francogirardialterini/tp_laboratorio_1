/*
 * Operaciones.h
 *
 *  Created on: 27 mar. 2021
 *      Author: Franco
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_
#include <stdio.h>

int PedirEntero(char mensajeError[], int minimo, int maximo);
float PedirFlotante(char mensaje[]);
float Sumar(float,float);
float Restar(float,float);
float Dividir(float,float);
float Multiplicar(float,float);
unsigned long int Factorial(float);

#endif /* OPERACIONES_H_ */
