#include <stdio.h>
#include <stdlib.h>

/*Ejercicio:
-
Crear una funci�n que permita ingresar un
numero al usuario, lo retorne y lo muestre

Crear una funci�n que reciba el radio de un
c�rculo y retorne su �rea.

*/

int mostrar();

int main()
{
    int numero;

    numero= mostrar(); // SE LLAMA A LA FUNCION

    printf("\nEl numero ingresado es %d", numero);

    return 0;
}
int mostrar() // DEVUELVE UN ENTERO
{
    int num;

    printf("\nIngresar un numero para luego mostrar: ");
    scanf("%d",&num);

    return num; // DEVUELVE EL DATO INGRESADO POR EL USUARIO
}
