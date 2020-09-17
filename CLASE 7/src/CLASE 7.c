/*
 ============================================================================
 Name        : CLASE.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	setbuf(stdout,NULL);

	int edades[10];
	int legajo[10];
	int sueldo[10];
	int i;

	for(i=0 ; i <10 ; i++)
	{
		legajo[i]=0;
	}


	// pedimos datos

	for(i=0 ; i <10 ; i++)
	{

		legajo[i]++;
		printf("\nIngrese una edad: ");
		scanf("%d", &edades[i]);

		printf("Ingrese sueldo: ");
		scanf("%d", &sueldo[i]);
	}


	// mostramos datos

	for(i=0 ; i <=10 ; i++)
	{
		printf("Legajo= %d Edad= %d sueldo= %d\n", legajo[i], edades[i], sueldo[i]);
	}


	return 0;
}
