/*
 ============================================================================
 Name        : CLASE 6
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : PUNTEROS
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//****   PUNTEROS

int calcular(int numero1, int numero2, int* suma, int* resta);

int main(void)

{
	setbuf(stdout,NULL);

	// parametros actuales

	int letraA= 20;
	int letraB= 10;
	int suma=0;
	int resta=0;
	int retorno;

	retorno= calcular(letraA, letraB, &suma, &resta);

	if(retorno==0) // 0 = funciona bien
	{
		printf("Operacion exitosa");
	}


	printf("\nLa suma es : %d", suma);
	printf("\nLa resta es :%d", resta);


	return 0;
}

int calcular(int numero1, int numero2, int* suma, int* resta)// parametros formales
{
	*suma=  numero1 + numero2;
	*resta= numero1 - numero2;

	return 0;

}
