/**************************
* Fecha: 16/08/2022
* Autor: Sergio Alejandro Cortes
* Materia: Parallel and Distributed Computing
* Tema: Diseño de Benchmark
* Tarea 1, problema 3
***************************/
#include <stdio.h> 
#include <math.h> 
float D,x,x2,y,y2,Rx,Ry;

void bienvenida()
{
	printf("========================================\n");
	printf("=             Bienvenido               =\n");					
	printf("=      App Distancia entre puntos      =\n");
	printf("========================================\n");
	
	printf("Ingrese la posicion x del primer punto: \n");
	scanf("%f", &(x));
	printf("Ingrese la posicion y del primer punto: \n");
	scanf("%f", &(y));
	printf("Ingrese la posicion x del segundo punto: \n");
	scanf("%f", &(x2));
	printf("Ingrese la posicion y del segundo punto: \n");
	scanf("%f", &(y2));
}
void distancia_puntos()
{
	Rx = pow((x2-x),2);
	Ry = pow((y2-y),2);
	D = sqrt((Rx+Ry));
	printf("La distancia entre punto y punto es: %f \n",D);
}

int main()
{
	bienvenida();
	distancia_puntos();
	return 0;
}
