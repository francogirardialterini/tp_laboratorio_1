/*
 * Libreria General.h
 *
 *  Created on: 1 may. 2021
 *      Author: Franco
 */

#ifndef LIBRERIA_GENERAL_H_
#define LIBRERIA_GENERAL_H_
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>
#define MAX_CHARS_CADENAS 30
#define VACIO 0
#define OCUPADO 1
#define BAJA -1
#define CONFIRMACION 1
#define CANCELACION 2

/*-------VALIDACIONES--------*/
int Validar_SoloLetras(char numero []);
char Pedir_UnChar(char mensaje[], char mensajeError[]);
int Validar_SoloLetrasConEspacios(char numero []);
void Pedir_ArraySoloDeLetrasConEspacios(char mensaje[], char aux[], int TAM);
void Pedir_ArrayLetrasYNumerosConEspacio(char mensaje[], char aux[], int TAM);
int Validar_Flotante(char numero[]);
float PedirFlotante_SinRango(char mensaje [], char mensajeError []);
int Pedir_EnteroConRango(char mensaje[], char mensajeError[], int min, int max);
int PedirEntero_SinRango(char mensaje []);
int Validar_Entero(char numero[]);
void Mayusculas_NombresYApellidos(char aux[]);
int Confirmar(char mensaje[], char mensajeErro[]);
void MostrarMensaje(char mensajeUno[]);

#endif /* LIBRERIA_GENERAL_H_ */
