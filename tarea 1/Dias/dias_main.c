/**************************
* Fecha: 16/08/2022
* Autor: Sergio Alejandro Cortes
* Materia: Parallel and Distributed Computing
* Tema: DiseÃ±o de Benchmark
* Tarea 1, problema 2
***************************/
//#include "mm_lib.h"
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h>

float dias;
float aÃ±os;
void bienvenida()
{

	printf("========================================\n");
	printf("=             Bienvenido               =\n");					
	printf("=        App Identificador aÃ±os        =\n");
	printf("========================================\n");
	
	printf("Ingrese el numero de dias a transformar en aÃ±os: \n");
	scanf("%f", &(dias));
	printf("los dias ingresados fueron: %f \n", dias);

}
void AÃ±os()
{
	aÃ±os = dias / 365.0;
	printf("El numero de aÃ±os que representan la cantidad de dias ingresados son: %f \n",aÃ±os);
}
void Semanas()
{
	float semanas = dias / 7.0;
	printf("El numero de Semanas que representan la cantidad de dias ingresados son: %f \n",semanas);
}
int main()
{
	bienvenida();
	AÃ±os();
	Semanas();
	return 0;
}
