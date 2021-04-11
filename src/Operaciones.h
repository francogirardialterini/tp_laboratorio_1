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
 * @brief Funcion que pide un N� entero, utilizando 3 par�metros.
 *
 * @param mensajeError array char para mostrar el mensaje de error en el caso que no se cumplan los par�metros de validaci�n.
 * @param minimo Entero que valida el minimo ingresado.
 * @param maximo Entero que valida el maximo ingresado.
 * @return
 */
int PedirEntero(char mensajeError[], int minimo, int maximo);

/**
 * @fn float PedirFlotante(char[])
 * @brief Funcion que pide un N� flotante, utilizando 1 par�metro.
 *
 * @param mensaje mensaje array char para mostrar el mensaje que pide el numero flotante.
 * @return
 */
float PedirFlotante(char mensaje[]);

/**
 * @fn float Sumar(float, float)
 * @brief Funcion que suma dos N� flotantes, utilizando 2 par�metros.
 *
 * @param Primer N� flotante.
 * @param Segunto N� flotante.
 * @return
 */
float Sumar(float,float);

/**
 * @fn float Restar(float, float)
 * @brief Funcion que resta dos N� flotantes, utilizando 2 par�metros.
 *
 * @param Primer N� flotante.
 * @param Segunto N� flotante.
 * @return
 */
float Restar(float,float);

/**
 * @fn float Dividir(float, float)
 * @brief Funcion que divide dos N� flotantes, utilizando 2 par�metros.
 *
 * @param Primer N� flotante.
 * @param Segunto N� flotante.
 * @return
 */
float Dividir(float,float);

/**
 * @fn float Multiplicar(float, float)
 * @brief Funcion que multiplica dos N� flotantes, utilizando 2 par�metros.
 *
 * @param Primer N� flotante.
 * @param Segunto N� flotante.
 * @return
 */
float Multiplicar(float,float);

/**
 * @fn unsigned long int Factorial(float)
 * @brief Funcion que factorea un N� flotante, utilizando 1 par�metro.
 *
 * @param N� flotante.
 * @return
 */
unsigned long int Factorial(float);

/**
 * @fn void MostrarMensajes(char[], char[], char[])
 * @brief Funcion que muestra cadenas de char, utilizando 3 par�metros.
 *
 * @param mensajeUno Primera cadena char
 * @param mensajeDos Segunda cadena char
 * @param mensajeTres tercera cadena char
 */
void MostrarMensajes(char mensajeUno[], char mensajeDos[], char mensajeTres[]);

/**
 * @fn void MostrarMensaje(char[])
 * @brief Funcion que muestra una cadena de char, utilizando 1 par�metro.
 *
 * @param mensajeUno Una cadena char.
 */
void MostrarMensaje(char mensajeUno[]);

/**
 * @fn void MostarOperacionesMatematicas(float, float, float, float, float, float, int, int, float, float, unsigned long int, unsigned long int)
 * @brief  Funcion que muestra todos los resultados de las operaciones matem�ticas, utilizando 12 parametros.
 *
 * @param operandoA N�mero flotante
 * @param operandoB N�mero flotante
 * @param sumaOperando N�mero flotante
 * @param restaOperando N�mero flotante
 * @param divisionOperando N�mero flotante
 * @param multiplicarOperando N�mero flotante
 * @param enteroA N�mero entero
 * @param enteroB N�mero entero
 * @param restaOperandoAEnteroA N�mero flotante
 * @param restaOperandoBEnteroB N�mero flotante
 * @param factorialOperandoA numero sin signo long entero
 * @param factorialOperandoB numero sin signo long entero
 */
void MostarOperacionesMatematicas(float operandoA, float operandoB,float sumaOperando, float restaOperando, float divisionOperando, float multiplicarOperando,
		int enteroA, int enteroB, float restaOperandoAEnteroA, float restaOperandoBEnteroB, unsigned long int factorialOperandoA, unsigned long int factorialOperandoB);

#endif /* OPERACIONES_H_ */
