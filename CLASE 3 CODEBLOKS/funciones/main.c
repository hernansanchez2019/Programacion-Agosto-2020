#include <stdio.h>
#include <stdlib.h>


/* Ejercicio:
-
Crear una función que permita ingresar un
numero al usuario, lo retorne y lo muestre.
-
Crear una función que reciba el radio de un
círculo y retorne su área. */


int suma(int num1, int num2);
int resta(int num1, int num2);
int producto(int num1, int num2);
float dividido(int num1, int num2);
int numero(int num3);

int main(void)
{

    int num1;
    int num2;
    int num3;
    int resultado;
    float resultadoDivision;

    num3= numero(num3);

    printf("\nIngresar un numero para calcular: ");
    scanf("%d", &num1);

    printf("\nIngresar un numero para calcular: ");
    scanf("%d", &num2);

    resultado= suma(num1,num2);

    printf("\nLa suma es: %d ", resultado);

    resultado= resta(num1,num2);

    printf("\nLa resta es: %d ", resultado);

    resultado= producto(num1, num2);

    printf("\nEl producto es: %d ", resultado);

    resultadoDivision=dividido(num1,num2);

    printf("\nLa division es: %.2f ", resultadoDivision);

    printf("\nEl numero ingresado por el usuario es %d", num3);


}

int suma(int num1, int num2)
{
    int resultado;
    resultado= num1 + num2;

    return resultado;
}

int resta(int num1, int num2)
{
    int resultado;
    resultado= num1 - num2;

    return resultado;
}

int producto(int num1, int num2)
{
    int resultado;
    resultado= num1 * num2;

    return resultado;
}


float dividido(int num1, int num2)
{
    float resultado;
    resultado= (float) num1 / num2;

    return resultado;
}

int numero(int num3)
{
    printf("\nIngresar un numero para luego mostrar: ");
    scanf("%d", &num3);

    return num3;
}


