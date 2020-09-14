#include <stdio.h>
#include <stdlib.h>


/*Una función:
    Realizar una función que reciba el precio float y el porcentaje de descuento como entero
    ,retornar el precio con el descuento al main

    */


float precio(float numero, int porcentajeDescuento);

int main()
{
    float precioProducto=0;
    int porcentajeDescuento=0;
    float precioDescontado;


    precioDescontado= precio(precioProducto, porcentajeDescuento);

    printf("\nPrecio con el descuento: %.2f", precioDescontado);



    return 0;
}


float precio(float numero, int porcentajeDescuento)
{

    float precioDescuento=0;
    int porcentaje;

    printf("Ingrese el precio: ");
    scanf("%f", &numero);

    printf("Ingrese el descuento: ");
    scanf("%d", &porcentajeDescuento);

    porcentaje=  numero * porcentajeDescuento /100;

    precioDescuento=  numero - porcentaje;


    return precioDescuento;

}

