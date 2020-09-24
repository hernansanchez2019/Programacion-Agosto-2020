/*
 ============================================================================
 Name        : Guia.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int calcular(int num1, int num2, int* suma, int* resta);

int main(void)

{
	setbuf(stdout,NULL);

	int numero1=10;
	int numero2=30;
	int suma=0;
	int resta=0;

	calcular(numero1, numero2, &suma, &resta);



	return 0;

}

int calcular(int num1, int num2, int* suma, int* resta)
{



}


