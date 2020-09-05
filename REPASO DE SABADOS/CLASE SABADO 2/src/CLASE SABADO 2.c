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


/*Sin funciones:
para realizar un pedido, solicitar tres datos ,
código de tipo int , validar entre 100 y 200
cantidad de tipo entero(int), validar entre 1 y 20
una talle de tipo char validad entre('S' , 'M' , 'L')
a-mostrar el código y el talle  del que mas cantidad solicito
b-el promedio del total  de cantidades de talle 'M' con decimales*/


int main(void)

{
	setbuf(stdout,NULL);

	int dato1;
	int dato2;
	char talle;
	int i;


for(i=0; i < 5 ; i++)
{


	printf("Ingrese un numero entre 100 y 200: ");
	scanf("%d", &dato1);


	printf("Ingrese un numero entre 1 y 20: ");
	scanf("%d", &dato2);

	printf("Ingrese un talle: ");
	fflush(stdin);
	scanf("%c", &talle);


}



		return 0;
}
