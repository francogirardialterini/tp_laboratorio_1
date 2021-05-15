/*
 * ArrayEmployees.c
 *
 *  Created on: 13 may. 2021
 *      Author: Franco
 */

#include "ArrayEmployees.h"



int MostrarMenuPrincipal()
{
	int opcion;
	MostrarMensaje("1. ALTA DE EMPLEADO");
	MostrarMensaje("2. BAJA DE EMPLEADO");
	MostrarMensaje("3. MODIFICACION DE EMPLEADO");
	MostrarMensaje("4. LISTADO EMPLEADOS");
	MostrarMensaje("5. INFORMES SALARIOS");
	MostrarMensaje("6. SALIR");
	opcion=Pedir_EnteroConRango("Elija una opcion: 1 al 6", "Error, elija una opcion: 1 al 6", 1, 6);
	return opcion;
}


void eEmployee_Harcodeo(eEmployee empleados[], int tamEmployee)
{
	int i;
	int id[]={1,2,3,4};
	char name[][51]={"Franco", "Luciano", "Horacio", "Alan"};
	char lasName[][51]={"Gonzalez", "Alterini", "Gonzalez", "Vaccarini"};
	float salary[]={10000, 10500, 20000, 20500};
	int sector[]={1,2,3,4};


	for(i=0;i<4;i++)
	{
		empleados[i].id=id[i];
		strcpy(empleados[i].name, name[i]);
		strcpy(empleados[i].lastName, lasName[i]);
		empleados[i].salary=salary[i];
		empleados[i].sector=sector[i];
		empleados[i].isEmpty=OCUPADO;
	}
}




int ObtenerID(int *id)
{
	return *id+=1;
}

int eEmployee_BuscarIndexLibre(eEmployee empleados[], int tamEmployee)
{
	int rta;
	rta=-1;
	int i;

	if (empleados != NULL && empleados > 0)
	{
		for (i = 0; i < tamEmployee; i++)
		{
			if (empleados[i].isEmpty == VACIO)
			{
				rta = i;
				break;
			}
		}
	}
	return rta;
}

void eEmployee_Inicializar(eEmployee empleados[], int tamEmployee)
{
	int i;

	if (empleados != NULL && tamEmployee > 0)
	{
		for (i = 0; i < tamEmployee; i++)
		{
			empleados[i].isEmpty=VACIO;
		}
	}
}


int eEmployee_BuscarPorID(eEmployee empleados[], int tamEmployee, int ID)
{
	int rta;
	rta=-1;
	int i;

	if (empleados != NULL && tamEmployee > 0)
	{
		for (i = 0; i < tamEmployee; i++)
		{
			if (empleados[i].id == ID && empleados[i].isEmpty == OCUPADO)
			{
				rta = i;
				break;
			}
		}
	}
	return rta;
}

int eEmployee_ConfirmarExistenciaDeUnEmpleado(eEmployee empleados[], int tamEmployee, int id)
{
	int i;
	int rta;
	rta=-1;
	if (empleados != NULL && tamEmployee > 0)
	{
		for(i=0;i<tamEmployee;i++)
		{
			if(empleados[i].id==id && empleados[i].isEmpty==OCUPADO)
			{
				rta=OCUPADO;
				break;
			}
		}
	}
	return rta;
}

int eEmployee_ConfirmarSiHayEmpleadosCargados(eEmployee empleados[], int tamEmployee)
{
	int i;
	int rta;
	rta=VACIO;
	if (empleados != NULL && tamEmployee > 0)
	{
		for(i=0;i<tamEmployee;i++)
		{
			if(empleados[i].isEmpty==OCUPADO)
			{
				rta=1;
				break;
			}
		}
	}
	return rta;
}

void eEmployee_OrdenarEmpleadosPorId(eEmployee empleados[], int tamEmployee)
{
	int i;
	int j;
	eEmployee aux;

	if (empleados != NULL && tamEmployee > 0)
	{
		for (i = 0; i < tamEmployee - 1; i++)
		{
			for (j = i + 1; j < tamEmployee; j++)
			{
				if (empleados[i].isEmpty == OCUPADO && empleados[j].isEmpty == OCUPADO)
				{
					if (empleados[i].id > empleados[j].id)
					{
						aux = empleados[i];
						empleados[i] = empleados[j];
						empleados[j] = aux;
					}
				}
			}
		}
	}
}


int eEmployee_OrdenarPorApellidoySector(eEmployee empleados[], int tamEmployee)
{
	int i;
	int j;
	eEmployee aux;
	int rta;
	rta= VACIO;
	int bandera;
	bandera=0;

		if(eEmployee_ConfirmarSiHayEmpleadosCargados(empleados, tamEmployee))
		{
			rta=OCUPADO;
			bandera=1;
		}

		if(bandera)
		{
			if (empleados != NULL && tamEmployee > 0)
			{
				for (i = 0; i < tamEmployee - 1; i++)
				{
					for (j = i + 1; j < tamEmployee; j++)
					{
						if (empleados[i].isEmpty == OCUPADO && empleados[j].isEmpty == OCUPADO)
						{
							if(strcmpi(empleados[i].lastName, empleados[j].lastName)>0)
							{
								aux = empleados[i];
								empleados[i] = empleados[j];
								empleados[j] = aux;
							}
							else
							{
								if(strcmpi(empleados[i].lastName, empleados[j].lastName)==0)
								{
									if (empleados[i].sector > empleados[j].sector)
									{
										aux = empleados[i];
										empleados[i] = empleados[j];
										empleados[j] = aux;
									}
								}
							}
						}
					}
				}
			}
		}
	eEmployee_MostrarTodos(empleados, tamEmployee);
	eEmployee_OrdenarEmpleadosPorId(empleados, tamEmployee);
	return rta;
}

int eEmployee_TotalYpromedioSalarios(eEmployee empleados[], int tamEmployee)
{
	int rta;
	rta= VACIO;
	int bandera;
	int contador;
	float acumulador;
	float promedio;
	bandera=0;
	contador=0;


	if(eEmployee_ConfirmarSiHayEmpleadosCargados(empleados, tamEmployee))
	{
		rta=OCUPADO;
		bandera=1;
	}

	if(bandera)
	{
		acumulador=eEmployee_SumarSueldos(empleados, tamEmployee);
		promedio=eEmployee_CalcularPromedio(empleados, tamEmployee);
		contador=eEmployee_EmpleadosConSalarioMayorAlPromedio(empleados, tamEmployee, promedio);
		printf("EL TOTAL DE LOS SALARIOS DE LOS EMPLEADOS ES %.2f\n", acumulador);
		printf("EL PROMEDIO DE LOS SALARIOS DE LOS EMPLEADOS ES %.2f\n", promedio);
		printf("LA CANTIDAD DE EMPLEADOS QUE SUPERA EL PROMEDIO ES: %d \n", contador);
	}

	return rta;
}

int eEmployee_EmpleadosConSalarioMayorAlPromedio(eEmployee empleados[], int tamEmployee, float promedio)
{
	int i;
	int contador;
	contador=0;
	if (empleados != NULL && tamEmployee > 0)
	{
		for (i = 0; i < tamEmployee; i++)
		{
			if(empleados[i].isEmpty==OCUPADO && empleados[i].salary>promedio)
			{
				contador++;
			}
		}
	}

	return contador;
}

float eEmployee_CalcularPromedio(eEmployee empleados[], int tamEmployee)
{
	float promedio;
	int contador;
	float acumulador;
	contador=0;
	acumulador=0;

	contador=eEmployee_ContarEmpleados(empleados, tamEmployee);
	acumulador=eEmployee_SumarSueldos(empleados, tamEmployee);
	promedio=acumulador/contador;

	return promedio;
}

int eEmployee_ContarEmpleados(eEmployee empleados[], int tamEmployee)
{
	int i;
	int contador;
	contador=0;

	if (empleados != NULL && tamEmployee > 0)
	{
		for (i = 0; i < tamEmployee; i++)
		{
			if(empleados[i].isEmpty==OCUPADO)
			{
				contador++;
			}
		}
	}
	return contador;
}


float eEmployee_SumarSueldos(eEmployee empleados[], int tamEmployee)
{
	int i;
	int acumulador;
	acumulador=0;

	if (empleados != NULL && tamEmployee > 0)
	{
		for (i = 0; i < tamEmployee; i++)
		{
			if(empleados[i].isEmpty==OCUPADO)
			{
				acumulador=acumulador+empleados[i].salary;
			}
		}
	}
	return acumulador;

}

int eEmployee_MostrarTodos(eEmployee empleados[], int tamEmployee)
{
	int i;
	int rta;
	rta= VACIO;

	if (empleados != NULL && tamEmployee > 0)
	{
		for (i = 0; i < tamEmployee; i++)
		{
			if (empleados[i].isEmpty == OCUPADO)
			{
				eEmployee_MostrarUno(empleados[i]);
				rta = 1;
			}
		}
	}
	return rta;
}



void eEmployee_MostrarUno(eEmployee unEmpleado)
{
	printf("ID:%5d %10s %10s      $%.2f      SECTOR:%d\n", unEmpleado.id, unEmpleado.name, unEmpleado.lastName, unEmpleado.salary, unEmpleado.sector);
}


int eEmployee_Alta(eEmployee empleados[], int tamEmployee, int *idEmpleado)
{
	int rta;
	rta = VACIO;
	eEmployee aux;
	int index;
	index=eEmployee_BuscarIndexLibre(empleados, tamEmployee);
	if (index != -1)
	{
		aux = eEmployee_CargarDatos();
		rta = CANCELACION;
		if(Confirmar("DESEA DAR DE ALTA, s/n", "error s/n"))
		{
			aux.id=ObtenerID(idEmpleado);
			aux.isEmpty=OCUPADO;
			empleados[index]= aux;
			rta = CONFIRMACION;
		}
	}
	return rta;
}


eEmployee eEmployee_CargarDatos()
{
	eEmployee aux;
	Pedir_ArraySoloDeLetrasConEspacios("INGRESE EL NOMBRE DEL EMPLEADO", aux.name, 51);
	Mayusculas_NombresYApellidos(aux.name);
	Pedir_ArraySoloDeLetrasConEspacios("INGRESE EL APELLIDO DEL EMPLEADO", aux.lastName, 51);
	Mayusculas_NombresYApellidos(aux.lastName);
	aux.salary=PedirFlotante_SinRango("INGRESE EL SALARIO $$", "ERROR, DEBEN SER NUMEROS");
	aux.sector=PedirEntero_SinRango("INGRESE EL Nro DEL SECTOR");
	return aux;
}


int eTrabajos_Baja(eEmployee empleados[], int tamEmployee)
{
	int rta;
	rta= VACIO;
	int bandera;
	int id;
	int index;
	int contador;
	bandera=0;
	contador=0;

		if(eEmployee_ConfirmarSiHayEmpleadosCargados(empleados, tamEmployee))
		{
			eEmployee_MostrarTodos(empleados, tamEmployee);
			bandera=1;
			rta = CANCELACION;
		}

		if(bandera)
		{
			id=PedirEntero_SinRango("INGRESE EL Id DEL EMPLEADO");
			while(eEmployee_ConfirmarExistenciaDeUnEmpleado(empleados, tamEmployee, id) == -1&&contador<3)
			{
				contador++;
				MostrarMensaje("NO SE ENCONTRO UN EMPLEADO CON ESE ID");
				id=PedirEntero_SinRango("ERROR, INGRESE EL Id DEL EMPLEADO");
			}

			if(contador<3)
			{
				index=eEmployee_BuscarPorID(empleados, tamEmployee, id);
				eEmployee_MostrarUno(empleados[index]);
				if(Confirmar("DESEA DAR DE BAJA?, s/n", "Error s/n"))
				{
					empleados[index].isEmpty = BAJA;
					rta = CONFIRMACION;
				}
			}
		}

	return rta;
}



int eEmployee_Modificacion(eEmployee empleados[], int tamEmployee)
{
	int rta;
	rta=VACIO;
	int id;
	int index;
	int bandera;
	eEmployee aux;
	int contador;
	bandera=0;
	contador=0;

		if(eEmployee_ConfirmarSiHayEmpleadosCargados(empleados, tamEmployee))
		{
			eEmployee_MostrarTodos(empleados, tamEmployee);
			bandera=1;
			rta = CANCELACION;
		}

		if(bandera)
		{
			id=PedirEntero_SinRango("INGRESE EL Id DEL EMPLEADO");
			while(eEmployee_ConfirmarExistenciaDeUnEmpleado(empleados, tamEmployee, id)==-1 && contador<3)
			{
				contador++;
				MostrarMensaje("NO SE ENCONTRO UN EMPLEADO CON ESE ID");
				id=PedirEntero_SinRango("ERROR, INGRESE EL Id DEL EMPLEADO");

			}
			if(contador<3)
			{
				index=eEmployee_BuscarPorID(empleados, tamEmployee, id);
				eEmployee_MostrarUno(empleados[index]);
				aux = eEmployee_ModificarUno(empleados[index]);
				if(Confirmar("DESEA REALIZAR LA MODIFICACION?, s/n", "Error s/n"))
				{
					empleados[index] = aux;
					rta=CONFIRMACION;
				}
			}
		}

	return rta;
}


eEmployee eEmployee_ModificarUno(eEmployee unEmpleado)
{
	eEmployee aux;
	aux=unEmpleado;

	if(Confirmar("DESEA MODIFICAR EL NOMBRE?, s/n", "Error s/n"))
	{
		Pedir_ArraySoloDeLetrasConEspacios("INGRESE EL NOMBRE DEL EMPLEADO", aux.name, 51);
		Mayusculas_NombresYApellidos(aux.name);
	}

	if(Confirmar("DESEA MODIFICAR EL APELLIDO?, s/n", "Error s/n"))
	{
		Pedir_ArraySoloDeLetrasConEspacios("INGRESE EL APELLIDO DEL EMPLEADO", aux.lastName, 51);
		Mayusculas_NombresYApellidos(aux.lastName);
	}
	if(Confirmar("DESEA MODIFICAR EL SALARIO?, s/n", "Error s/n"))
	{
		aux.salary=PedirFlotante_SinRango("INGRESE EL SALARIO $$", "ERROR, DEBEN SER NUMEROS");
	}
	if(Confirmar("DESEA MODIFICAR EL SECTOR?, s/n", "Error s/n"))
	{
		aux.sector=PedirEntero_SinRango("INGRESE EL Nro DEL SECTOR");
	}
	return aux;
}
