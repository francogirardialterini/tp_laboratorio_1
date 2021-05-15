

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>
#include "ArrayEmployees.h"
#define VACIO 0
#define OCUPADO 1
#define BAJA -1
#define CONFIRMACION 1
#define CANCELACION 2
#define tamEmployee 1000



int main(void) {

	setbuf(stdout, NULL);
	int opcionMenu;
	int altaEmpleado;
	int bajaEmpleado;
	int modificacionEmpleado;
	int idEmpleado;
	int listadoEmpleados;
	int informesSalarios;
	idEmpleado=0;

	eEmployee empleados[tamEmployee];
	eEmployee_Inicializar(empleados, tamEmployee);
	//eEmployee_Harcodeo(empleados, tamEmployee);

	do {
		system("cls");
		system("color 9");
		MostrarMensaje("TRABAJO PRACTICO NRO 2 \n");
		MostrarMensaje("BIENVENIDO AL ABM");
		opcionMenu=MostrarMenuPrincipal();
		switch (opcionMenu)
		{
		/*ALTA*/
		case 1:
			system("cls");
			system("color 1f");
			altaEmpleado=eEmployee_Alta(empleados, tamEmployee, &idEmpleado);
			switch(altaEmpleado)
			{
				case CONFIRMACION:
					MostrarMensaje("ALTA EXITOSA");
						break;
				case CANCELACION:
					MostrarMensaje("ALTA CANCELADA");
						break;
				case VACIO:
					MostrarMensaje("ERROR. SIN ESPACIO PARA ALMACENAR");
						break;
			}
			system("pause");
				break;

		case 2:
			/*BAJA*/
			system("cls");
			system("color 5f");
			bajaEmpleado=eTrabajos_Baja(empleados, tamEmployee);
			switch(bajaEmpleado)
			{
				case CONFIRMACION:
					MostrarMensaje("BAJA EXITOSA");
						break;
				case CANCELACION:
					MostrarMensaje("BAJA CANCELADA");
						break;
				case VACIO:
					MostrarMensaje("NO HAY DATOS CARGADOS");
						break;
			}
			system("pause");
				break;
		case 3:
			/*MODIFICACION*/
			system("cls");
			system("color 3f");
			modificacionEmpleado=eEmployee_Modificacion(empleados, tamEmployee);
			switch(modificacionEmpleado)
			{
				case CONFIRMACION:
					MostrarMensaje("MODIFICACION EXITOSA");
						break;
				case CANCELACION:
					MostrarMensaje("MODIFICACION CANCELADA");
						break;
				case VACIO:
					MostrarMensaje("NO HAY DATOS CARGADOS");
						break;
			}
			system("pause");
				break;
		case 4:
			/*LISTADO EMPLEADOS*/
			system("cls");
			system("color 8f");
			listadoEmpleados=eEmployee_OrdenarPorApellidoySector(empleados, tamEmployee);
			if(listadoEmpleados==VACIO)
			{
				MostrarMensaje("NO HAY DATOS CARGADOS");
			}
			system("pause");
			break;

		case 5:
			/*INFORMES SALARIOS*/
			system("cls");
			system("color 9f");
			informesSalarios=eEmployee_TotalYpromedioSalarios(empleados, tamEmployee);
			if(informesSalarios==VACIO)
			{
				MostrarMensaje("NO HAY DATOS CARGADOS");
			}
			system("pause");
			break;

		case 6:
			system("cls");
			system("color 4f");
			MostrarMensaje("USTED ESTA SALIENDO");
			system("pause");
			break;
	}
} while (opcionMenu != 6);


	return EXIT_SUCCESS;
}
