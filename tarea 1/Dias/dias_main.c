/**************************
* Fecha: 16/08/2022
* Autor: Sergio Alejandro Cortes
* Materia: Parallel and Distributed Computing
* Tema: Diseño de Benchmark
* Tarea 1, problema 2
***************************/
//#include "mm_lib.h"
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h>

float dias;
float años;
void bienvenida()
{

	printf("========================================\n");
	printf("=             Bienvenido               =\n");					
	printf("=        App Identificador años        =\n");
	printf("========================================\n");
	
	printf("Ingrese el numero de dias a transformar en años: \n");
	
	scanf("%f", &(dias));

}
void Años()
{
	años = dias / 365.0;
	printf("El numero de años que representan la cantidad de dias ingresados son: %f \n",años);
}
int main()
{
	bienvenida();
	Años();
	return 0;
}


