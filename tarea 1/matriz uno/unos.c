/**************************
* Fecha: 16/08/2022
* Autor: Sergio Alejandro Cortes
* Materia: Parallel and Distributed Computing
* Tema: Diseño de Benchmark
* Tarea 1, problema 6
***************************/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int t,Size,i,j;

void bienvenida(){
	printf("========================================\n");
	printf("=             Bienvenido               =\n");					
	printf("=         Matriz impreso unos          =\n");
	printf("========================================\n");

}
void matrices(int n,int a[])
{
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			a[i+j*n]=1;
		}
	} 
	printf("\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d", a[i+j*n]);
		}
		printf("\n");
	} 
}

int main()
{
	
	bienvenida();
	printf("Ingrese matriz con un tamaño menor a 8: \n");
	scanf("%d",&t);
	if(t<=8)
	{
		Size = t*t;
		int m[Size];
		matrices(t, m);	
	} 
	else 
	{
		printf("tamaño errado. \n");
	}
	
	return 0;
}
