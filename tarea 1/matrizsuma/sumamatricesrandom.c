/**************************
* Fecha: 16/08/2022
* Autor: Sergio Alejandro Cortes
* Materia: Parallel and Distributed Computing
* Tema: Diseño de Benchmark
* Tarea 1, problema 8
***************************/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int t,Size,i,j,r,r2;

void bienvenida(){
	printf("========================================\n");
	printf("=             Bienvenido               =\n");					
	printf("=     APP matrices random sumadas      =\n");
	printf("========================================\n");

}
void matrices(int n,int a[],int b[],int suma[])
{
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			r = rand() % (9-0+1) + 0;
			r2 = rand() % (9-0+1) + 0;
			a[i+j*n]=r;
			b[i+j*n]=r2;
			suma[i+j*n]=0;
			suma[i+j*n] = (a[i+j*n] + b[i+j*n]);
		}
	} 
	printf("\n");	
}
void imprimir(int n, int h[])
{
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d", h[i+j*n]);
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
		int ma[Size],mb[Size],mc[Size];
		matrices(t,ma,mb,mc);	
		imprimir(t,ma);
		printf("\n");
		imprimir(t,mb);
		printf("\n");
		printf("la sumatoria de ambas matrices da: \n");
		imprimir(t,mc);
	} 
	else 
	{
		printf("tamaño errado. \n");
	}
	
	return 0;
}
