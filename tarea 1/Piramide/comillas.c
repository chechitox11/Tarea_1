/**************************
* Fecha: 16/08/2022
* Autor: Sergio Alejandro Cortes
* Materia: Parallel and Distributed Computing
* Tema: Diseño de Benchmark
* Tarea 1, problema 5
***************************/
#include <stdio.h> 
int a,j, lineas;

void piramide()
{
	printf("ingrese el numero de lineas que desea copiar no mayor a 14: ");
	scanf("%i",&lineas);
	if (lineas <= 14)
	{
		for (a=1;a<=lineas;a++)
		{
			for (j=1;j<=a;j++)
			{
				printf("*");
			}
			printf("\n");	
		}
	}
	else
	{
		printf("valor valido de las lineas superado \n");
	}	
} 
void bienvenida()
{

	printf("========================================\n");
	printf("=             Bienvenido               =\n");					
	printf("=        App Piramide comillas         =\n");
	printf("========================================\n");	
}
int main()
{
	bienvenida();
	piramide();
	return 0;
}

