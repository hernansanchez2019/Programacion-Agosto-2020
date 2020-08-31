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
//******************* 1° EJERCICIO


	/*int numeroUno;
	int numeroDos;
	int suma;
	int resultado;
	char letra;

	setbuf(stdout,NULL);

	printf("Ingrese un Numero: ");
	scanf("%d",&numeroUno);

	printf("Ingrese un Numero: ");
	scanf("%d",&numeroDos);

	printf("Ingrese una letra: ");
	fflush(stdin); // limpia el buffer para poder ingresar caracteres o arrays de caracteres
	// __fpurge(stdin) para Linux, mac o GDB
	scanf("%c", &letra);

	suma= numeroUno + numeroDos;
	resultado= suma;

	printf("La Suma es: %d", resultado);
	printf("\nLa letra ingresada es: %c", letra);*/


	//******************* 2° EJERCICIO


	/*int numero;
	int i;
	int contadorDivisores=0;

	setbuf(stdout,NULL);

	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	for(i=1 ; i<numero ; i++)
	{
			if(numero % i==0)
		{
			printf("\n%d, es divisible de %d ", numero, i);
			contadorDivisores++;

		}

	}

	printf("\nLa cantidad de divisores de %d, son %d ", numero, contadorDivisores);*/

	//******************* 3° EJERCICIO

	int numero;
	char respuesta;
	int positivos=0;

	setbuf(stdout,NULL);

	do
	{
		printf("Ingrese un numero: ");
		scanf("%d", &numero);
		if(numero>0)
		{
			positivos= numero + positivos;
		}

		printf("\nDesea agregar otro numero? ");
		fflush(stdin);
		scanf("%c", &respuesta);

	}while( respuesta=='s');

	printf("\nLa suma de los positivos es : %d", positivos);

	return 0;
}
