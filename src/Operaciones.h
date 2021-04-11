/*
 * Operaciones.h
 *
 *  Created on: 27 mar. 2021
 *      Author: Franco
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>
/**
 * @fn int PedirEntero(char[], int, int)
 * @brief Funcion que pide un N° entero, utilizando 3 parámetros.
 *
 * @param mensajeError array char para mostrar el mensaje de error en el caso que no se cumplan los parámetros de validación.
 * @param minimo Entero que valida el minimo ingresado.
 * @param maximo Entero que valida el maximo ingresado.
 * @return
 */
int PedirEntero(char mensajeError[], int minimo, int maximo);

/**
 * @fn float PedirFlotante(char[])
 * @brief Funcion que pide un N° flotante, utilizando 1 parámetro.
 *
 * @param mensaje mensaje array char para mostrar el mensaje que pide el numero flotante.
 * @return
 */
float PedirFlotante(char mensaje[]);

/**
 * @fn float Sumar(float, float)
 * @brief Funcion que suma dos N° flotantes, utilizando 2 parámetros.
 *
 * @param Primer N° flotante.
 * @param Segunto N° flotante.
 * @return
 */
float Sumar(float,float);

/**
 * @fn float Restar(float, float)
 * @brief Funcion que resta dos N° flotantes, utilizando 2 parámetros.
 *
 * @param Primer N° flotante.
 * @param Segunto N° flotante.
 * @return
 */
float Restar(float,float);

/**
 * @fn float Dividir(float, float)
 * @brief Funcion que divide dos N° flotantes, utilizando 2 parámetros.
 *
 * @param Primer N° flotante.
 * @param Segunto N° flotante.
 * @return
 */
float Dividir(float,float);

/**
 * @fn float Multiplicar(float, float)
 * @brief Funcion que multiplica dos N° flotantes, utilizando 2 parámetros.
 *
 * @param Primer N° flotante.
 * @param Segunto N° flotante.
 * @return
 */
float Multiplicar(float,float);

/**
 * @fn unsigned long int Factorial(float)
 * @brief Funcion que factorea un N° flotante, utilizando 1 parámetro.
 *
 * @param N° flotante.
 * @return
 */
unsigned long int Factorial(float);

/**
 * @fn void MostrarMensajes(char[], char[], char[])
 * @brief Funcion que muestra cadenas de char, utilizando 3 parámetros.
 *
 * @param mensajeUno Primera cadena char
 * @param mensajeDos Segunda cadena char
 * @param mensajeTres tercera cadena char
 */
void MostrarMensajes(char mensajeUno[], char mensajeDos[], char mensajeTres[]);

/**
 * @fn void MostrarMensaje(char[])
 * @brief Funcion que muestra una cadena de char, utilizando 1 parámetro.
 *
 * @param mensajeUno Una cadena char.
 */
void MostrarMensaje(char mensajeUno[]);

/**
 * @fn void MostarOperacionesMatematicas(float, float, float, float, float, float, int, int, float, float, unsigned long int, unsigned long int)
 * @brief  Funcion que muestra todos los resultados de las operaciones matemáticas, utilizando 12 parametros.
 *
 * @param operandoA Número flotante
 * @param operandoB Número flotante
 * @param sumaOperando Número flotante
 * @param restaOperando Número flotante
 * @param divisionOperando Número flotante
 * @param multiplicarOperando Número flotante
 * @param enteroA Número entero
 * @param enteroB Número entero
 * @param restaOperandoAEnteroA Número flotante
 * @param restaOperandoBEnteroB Número flotante
 * @param factorialOperandoA numero sin signo long entero
 * @param factorialOperandoB numero sin signo long entero
 */
void MostarOperacionesMatematicas(float operandoA, float operandoB,float sumaOperando, float restaOperando, float divisionOperando, float multiplicarOperando,
		int enteroA, int enteroB, float restaOperandoAEnteroA, float restaOperandoBEnteroB, unsigned long int factorialOperandoA, unsigned long int factorialOperandoB);

#endif /* OPERACIONES_H_ */
