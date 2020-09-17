/*
 ============================================================================
 Name        : sabado.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
1- realizar el pedido de 10 números entre -100 y 100 al usuario y guardarlos en un vector, luego de ese vector obtén
a- la suma de los números pares
b- que se muestren los números impares
c- la cantidad de ceros


*/

#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	setbuf(stdout,NULL);

	int numeros[10];
	int i;
	int pares[10];
	int impares[10];
	int suma=0;
	int cantidadCeros=0;

	for(i=0; i<10 ; i++)
	{

		printf("Ingrese un numero entre -100 y 100 = ");
		scanf("%d",&numeros[i]);

		if(numeros[i]% 2 != 0)
	    {
	        impares[i]= numeros[i];
	    }

	    else
	    {
	        pares[i]= numeros[i];
	        suma= suma + pares[i];
	    }

	    if(numeros[i]==0)
	    {
	        cantidadCeros++;
	    }

	}

	 printf("\nLa suma de los pares = %d", suma);
	 printf("\nCantidad de ceros = %d", cantidadCeros);

	for(i=1 ; i < 10 ; i++)
	{
	    printf("\nImpares --> %d", impares[i]);
	}



	return 0;
}

