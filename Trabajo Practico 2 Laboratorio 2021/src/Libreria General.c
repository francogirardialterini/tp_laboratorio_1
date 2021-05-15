/*
 * Libreria General.c
 *
 *  Created on: 1 may. 2021
 *      Author: Franco
 */
#include "Libreria General.h"


int Confirmar(char mensaje[], char mensajeErro[])
{
	char respuesta;
	int rta=0;
	respuesta=Pedir_UnChar(mensaje, mensajeErro);
	respuesta=tolower(respuesta);
	if(respuesta=='s')
	{
		rta=1;
	}
	return rta;
}


void PonerMayusculasANombresOApellidos(char aux[])
{
	int i;

	for(i=0;i<strlen(aux);i++)
	{
		if(i==0||isspace(aux[i-1]))
		{
			aux[i] = toupper(aux[i]);
		}
	}
}


void MostrarMensaje(char mensajeUno[])
{
	printf("%s \n", mensajeUno);
}

int Validar_SoloLetras(char numero [])
{
	int respuesta;
	respuesta= 1;
	int i;
	if(strlen(numero)>0)
	{
		for(i = 0; i < strlen(numero); i++)
		{
			if(isalpha(numero[i]) == 0)
			{
				respuesta = 0;
				break;
			}
		}
	}
	else
	{
		respuesta = 0;
	}

	return respuesta;
}

char Pedir_UnChar(char mensaje[], char mensajeError[])
{
	char charIngresado[100];
	char rtn;

	printf("%s", mensaje);
	fflush(stdin);
	gets(charIngresado);

	while(strlen(charIngresado) > 1 || Validar_SoloLetras(charIngresado) == 0)
	{
		printf("%s", mensajeError);
		fflush(stdin);
		gets(charIngresado);
	}

	rtn = charIngresado[0];

	return rtn;
}

int Validar_Flotante(char numero[])
{
	int contador;
	int i;
	contador= 0;
	int respuesta;
	respuesta=1;

	for(i=0 ; i < strlen(numero); i++)
	{
		if(i==0 && numero[i] == '-')
		{
			continue;
		}
		if(isdigit(numero[i])==0 || numero[i]==' ')
		{
			if(numero[i] == '.' && contador == 0)
			{
				contador++;
			}
			else
			{
				respuesta = 0;
				break;
			}
		}
	}

	return respuesta;
}

float PedirFlotante_SinRango(char mensaje [], char mensajeError [])
{
	char numeroIngresado[100];
	float rtn;

	printf("%s", mensaje);
	fflush(stdin);
	gets(numeroIngresado);

	while(Validar_Flotante(numeroIngresado) == 0)
	{
		printf("%s", mensajeError);
		fflush(stdin);
		gets(numeroIngresado);
	}

	rtn = atof(numeroIngresado);
	return rtn;
}

int Validar_Entero(char numero[])
{
	int respuesta;
	respuesta=1;
	int contador;
	contador=0;
	int i;
	if(strlen(numero)>0)
	{
		for(i=0; i<strlen(numero); i++)
		{
			if(numero[i]=='-')
			{
				contador++;
			}
			else
			{
				if(isdigit(numero[i])==0)
				{
					respuesta=0;
					break;
				}
			}
		}
	}
	else
	{
		respuesta = 0;
	}
	if(contador>1)
	{
		respuesta=0;
	}
	return respuesta;
}



int PedirEntero_SinRango(char mensaje [])
{
	char numeroIngresado[100];
	int respuesta;

	printf("%s \n", mensaje);
	fflush(stdin);
	gets(numeroIngresado);

	while(Validar_Entero(numeroIngresado) == 0)
	{
		printf("DEBE SER UN NUMERO ENTERO \n");
		fflush(stdin);
		gets(numeroIngresado);
	}
	respuesta = atoi(numeroIngresado);

	return respuesta;
}

int Pedir_EnteroConRango(char mensaje[], char mensajeError[], int min, int max)
{
	int respuesta;
	respuesta= PedirEntero_SinRango(mensaje);

	while(respuesta < min || respuesta > max)
	{
		printf("%s \n", mensajeError);
		respuesta = PedirEntero_SinRango(mensaje);
	}

	return respuesta;
}

int Validar_SoloLetrasConEspacios(char numero [])
{
	int respuesta;
	respuesta= 1;
	int i;

	if(strlen(numero) > 0)
	{
		for(i = 0; i < strlen(numero); i++)
		{
			if(isalpha(numero[i]) == 0)
			{
				if(isspace(numero[i]) == 0)
				{
					respuesta = 0;
					break;
				}
			}
		}
	}
	else
	{
		respuesta = 0;
    }

	return respuesta;
}

void Pedir_ArraySoloDeLetrasConEspacios(char mensaje[], char aux[], int TAM)
{
	char palabra[100];

	printf("%s", mensaje);
	fflush(stdin);
	gets(palabra);

	while(strlen(palabra) > TAM || strlen(palabra) == 0 || Validar_SoloLetrasConEspacios(palabra) == 0)
	{

		if(strlen(palabra) > TAM || strlen(palabra) == 0){
			printf("ERROR. El rango de caracteres es minimo: 1 y maximo: %d.\n", TAM);
		}else{
			printf("ERROR. Ingresar unicamente caracteres alfabeticos.\n");
		}

		fflush(stdin);
		gets(palabra);
	}

	strcpy(aux, palabra);
}

void Pedir_ArrayLetrasYNumerosConEspacio(char mensaje[], char aux[], int TAM)
{
	char palabra[100];

	printf("%s", mensaje);
	fflush(stdin);
	gets(palabra);

	while(strlen(palabra) > TAM || strlen(palabra) == 0)
	{

		if(strlen(palabra) > TAM || strlen(palabra) == 0)
		{
			printf("ERROR. El rango de caracteres es minimo: 1 y maximo: %d.\n", TAM);
		}

		fflush(stdin);
		gets(palabra);
	}

	strcpy(aux, palabra);
}

void Mayusculas_NombresYApellidos(char aux[])
{
	int i;
	strlwr(aux);
	for(i=0;i<strlen(aux);i++)
	{
		if(i==0||isspace(aux[i-1]))
		{
			aux[i] = toupper(aux[i]);
		}
	}
}

