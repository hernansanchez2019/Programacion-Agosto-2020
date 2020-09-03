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
//#include <conio.h>

/*Realizar un Menú que muestre las opciones:

a-Saludar
b-Brindar
c-Despedirse
d-Salir

Nota:
-Antes de salir preguntar si "esta seguro que desea salir?"
-Si Brinda sin haber saludado, debe avisar "Debe saludar antes de Brindar" y no deja continuar
-Si se despide antes de saludar debe avisar "Debe saludar antes de Brindar" y no deja continuar
-Si se despide antes de brindar debe avisar "Debe brindar antes de despedirse" y no deja continuar.*/


int main(void)

{

	char respuesta;

	setbuf(stdout,NULL);

	do
	{
		printf(" Elija una opcion\n\n a-Saludar\n b-Brindar\n c-Despedirse\n d-Salir : " );
		fflush(stdin);
		scanf("%c", &respuesta);

		switch(respuesta)
		{
			case 'a': printf("\nHola Bienvenido !!!");
						break;

			case 'b': printf("\nChin Chin !!!");
						break;
			case 'c': printf("\nChauuuu !!!");
						break;
			case 'd': break;

		}

		printf("\nDesea agregar otra opcion?");

	}	while(respuesta!='d');



	return  0;
}
