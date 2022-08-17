/**************************
* Fecha: 16/08/2022
* Autor: Sergio Alejandro Cortes
* Materia: Parallel and Distributed Computing
* Tema: Diseño de Benchmark
* Tarea 1, problema 4
***************************/
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h>
int a,num;

void numeros()
{
	printf("los numeros naturales son: \n");
	for (a=1;a<=10;a++)
	{
		num = 0+a;
		printf("%i \n",num);	
	}
}


void bienvenida()
{
	printf("========================================\n");
	printf("=             Bienvenido               =\n");					
	printf("=        App Numeros Naturales         =\n");
	printf("========================================\n");	
}
int main()
{
	bienvenida();
	numeros();
	return 0;
}
