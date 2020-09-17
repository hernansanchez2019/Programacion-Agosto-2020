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

int calcular(int numero1, int numero2, int* suma, int* resta, int* producto);

int main(void)

{
	setbuf(stdout,NULL);

	// parametros actuales

	int letraA;
	int letraB;
	int suma=0;
	int resta=0;
	int producto=0;
	int retorno=0;


	retorno= calcular(letraA, letraB, &suma, &resta, &producto);

	if(retorno==0) // 0 = funciona bien
	{
		printf("Operacion exitosa");
	}

	else
	{
		printf("Error...");
	}



	printf("\nLa suma es : %d", suma);
	printf("\nLa resta es : %d", resta);
	printf("\nEl producto es: %d", producto);


	return 0;
}

int calcular(int numero1, int numero2, int* suma, int* resta, int* producto)// parametros formales
{

	printf("Ingrese un numero = ");
	scanf("%d", &numero1);

	printf("Ingrese un numero = ");
	scanf("%d", &numero2);



	*suma=  numero1 + numero2;
	*resta= numero1 - numero2;
	*producto= numero1 * numero2;



	return 0;

}
