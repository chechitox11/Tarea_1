/**************************
* Fecha: 10/08/2022
* Autor: Sergio Alejandro Cortes
* Materia: Parallel and Distributed Computing
* Tema: Diseño de Benchmark
* Tarea 1, problema 2
***************************/
#include "mult_lib.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int n1,n2;
void bienvenida()
{

	printf("========================================\n");
	printf("=             Bienvenido               =\n");					
	printf("=          App Multiplicacion          =\n");
	printf("========================================\n");
	
	printf("Ingrese el primer numero a multiplicar: \n");
	
	scanf("%f", &(no1));
	
	printf("Ingrese el primer numero a multiplicar: \n");
	
	scanf("%f", &(no2));
	
}
void multiplicar()
{
	int multiplicacion = no1 * no2;
	printf("El resultado de la multiplicacion es: %i \n",multiplicacion);
}

