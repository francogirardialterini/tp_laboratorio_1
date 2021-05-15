/*
 * ArrayEmployees.h
 *
 *  Created on: 13 may. 2021
 *      Author: Franco
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_
#include "Libreria General.h"




typedef struct
{
	int id;
	char name[MAX_CHARS_CADENAS];
	char lastName[MAX_CHARS_CADENAS];
	float salary;
	int sector;
	int isEmpty;
}eEmployee;

/**
 * @fn int ObtenerID(int*)
 * @brief Función que asigna automaticamente el id del empleado al realizar su carga
 *
 * @param id
 * @return
 */
int ObtenerID(int *id);

/**
 * @fn int MostrarMenuPrincipal()
 * @brief Función que muestra el menú principal
 *
 * @return retorna un entero
 */
int MostrarMenuPrincipal();

/**
 * @fn void eEmployee_Harcodeo(eEmployee[], int)
 * @brief Función que hardcodea algunos empleados
 *
 * @param empleados
 * @param tamEmployee
 */
void eEmployee_Harcodeo(eEmployee empleados[], int tamEmployee);

/**
 * @fn void eEmployee_Inicializar(eEmployee[], int)
 * @brief Función que inicializa el isEmpty de los empleados en 0
 *
 * @param empleados
 * @param tamEmployee
 */
void eEmployee_Inicializar(eEmployee empleados[], int tamEmployee);

/**
 * @fn int eEmployee_BuscarIndexLibre(eEmployee[], int)
 * @brief Función que busca index libres para realizar la carga de un empleado
 *
 * @param empleados
 * @param tamEmployee
 * @return returna el nro de index o -1 si esta todo ocupado
 */
int eEmployee_BuscarIndexLibre(eEmployee empleados[], int tamEmployee);

/**
 * @fn int eEmployee_Alta(eEmployee[], int, int*)
 * @brief Función que realiza el alta de un empleado
 *
 * @param empleados
 * @param tamEmployee
 * @param idEmpleado
 * @return 1 en caso de confirmación, 0 si no hay  espacio libre, 2 si cancela el alta
 */
int eEmployee_Alta(eEmployee empleados[], int tamEmployee, int* idEmpleado);

/**
 * @fn eEmployee eEmployee_CargarDatos()
 * @brief Función que realiza la carga de los datos del empleado en el alta
 *
 * @return un empleado
 */
eEmployee eEmployee_CargarDatos();

/**
 * @fn int eEmployee_BuscarPorID(eEmployee[], int, int)
 * @brief Función que busca un empleado por el nro de id
 *
 * @param empleados
 * @param tamEmployee
 * @param ID
 * @return devuelve el index del empleado
 */
int eEmployee_BuscarPorID(eEmployee empleados[], int tamEmployee, int ID);

/**
 * @fn int eEmployee_ConfirmarExistenciaDeUnEmpleado(eEmployee[], int, int)
 * @brief Función que confirma la existencia de un empleado
 *
 * @param empleados
 * @param tamEmployee
 * @param id
 * @return retorna 1 en caso que exista y 0 en caso de que no
 */
int eEmployee_ConfirmarExistenciaDeUnEmpleado(eEmployee empleados[], int tamEmployee, int id);

/**
 * @fn int eEmployee_ConfirmarSiHayEmpleadosCargados(eEmployee[], int)
 * @brief Función que informa si hay algun empleado cargado en el array
 *
 * @param empleados
 * @param tamEmployee
 * @return retorna 1 en caso que exista y 0 en caso de que no
 */
int eEmployee_ConfirmarSiHayEmpleadosCargados(eEmployee empleados[], int tamEmployee);

/**
 * @fn void eEmployee_OrdenarEmpleadosPorId(eEmployee[], int)
 * @brief Función que ordena la lista de array por el nro de id de los emplados
 *
 * @param empleados
 * @param tamEmployee
 */
void eEmployee_OrdenarEmpleadosPorId(eEmployee empleados[], int tamEmployee);

/**
 * @fn int eTrabajos_Baja(eEmployee[], int)
 * @brief Función que da de baja un empleado
 *
 * @param empleados
 * @param tamEmployee
 * @return 1 en caso de confirmación, 0 si no hay  espacio libre, 2 si cancela
 */
int eTrabajos_Baja(eEmployee empleados[], int tamEmployee);

/**
 * @fn int eEmployee_Modificacion(eEmployee[], int)
 * @brief Función que modifica un empleado
 *
 * @param empleados
 * @param tamEmployee
 * @return 1 en caso de confirmación, 0 si no hay  espacio libre, 2 si cancela el alta
 */
int eEmployee_Modificacion(eEmployee empleados[], int tamEmployee);

/**
 * @fn eEmployee eEmployee_ModificarUno(eEmployee)
 * @brief Funcion que modifica un solo empleado
 *
 * @param unEmpleado
 * @return un empleado modificado
 */
eEmployee eEmployee_ModificarUno(eEmployee unEmpleado);

/**
 * @fn int eEmployee_MostrarTodos(eEmployee[], int)
 * @brief Función que muestra todos los empleados
 *
 * @param empleados
 * @param tamEmployee
 * @return
 */
int eEmployee_MostrarTodos(eEmployee empleados[], int tamEmployee);

/**
 * @fn void eEmployee_MostrarUno(eEmployee)
 * @brief Función que muestra un solo empleado
 *
 * @param unEmpleado
 */
void eEmployee_MostrarUno(eEmployee unEmpleado);

/**
 * @fn int eEmployee_OrdenarPorApellidoySector(eEmployee[], int)
 * @brief Función que ordena el array de empleados por apellido y en caso de igualdad por sector
 *
 * @param empleados
 * @param tamEmployee
 * @return
 */
int eEmployee_OrdenarPorApellidoySector(eEmployee empleados[], int tamEmployee);

/**
 * @fn int eEmployee_ContarEmpleados(eEmployee[], int)
 * @brief Función que cuenta la cantidad de empleados cargados en el array
 *
 * @param empleados
 * @param tamEmployee
 * @return
 */
int eEmployee_ContarEmpleados(eEmployee empleados[], int tamEmployee);

/**
 * @fn float eEmployee_SumarSueldos(eEmployee[], int)
 * @brief Función que suma la totalidad de los sueldos de los empleados cargados
 *
 * @param empleados
 * @param tamEmployee
 * @return
 */
float eEmployee_SumarSueldos(eEmployee empleados[], int tamEmployee);

/**
 * @fn float eEmployee_CalcularPromedio(eEmployee[], int)
 * @brief Función que calcula el promedio de los salarios de los empleados
 *
 * @param empleados
 * @param tamEmployee
 * @return retorna el promedio en flotante
 */
float eEmployee_CalcularPromedio(eEmployee empleados[], int tamEmployee);

/**
 * @fn int eEmployee_EmpleadosConSalarioMayorAlPromedio(eEmployee[], int, float)
 * @brief Función que cuenta los empleados con un salario mayor al promedio
 *
 * @param empleados
 * @param tamEmployee
 * @param promedio
 * @return retorna el numero de empleados que supera el promedio
 */
int eEmployee_EmpleadosConSalarioMayorAlPromedio(eEmployee empleados[], int tamEmployee, float promedio);


int eEmployee_TotalYpromedioSalarios(eEmployee empleados[], int tamEmployee);



#endif /* ARRAYEMPLOYEES_H_ */
