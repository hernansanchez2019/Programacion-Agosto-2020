#include <stdio.h>
#include <stdlib.h>

/*Ejercicio 01:
Se pide una cantidad indeterminada de edades enteras,
informar:
el máximo ingresado
el mínimo ingresado
el promedio
la cantidad de edades ingresadas */

/* Ademas de la edad ingresar el estado civil de la persona ( 's' para soltera , 'c' para casada, 'd' divorciada)
    ademas de informar lo anterior ....informar:
    la persona mas joven de las casadas
    a persona mas Vieja de las solteras
    de los estados civiles , cual fue el mas ingresado*/


int main()
{
    int edades;
    int max=0;
    int min;
    int suma=0;
    float promedio;
    int cantidadEdades=0;
    char respuesta;


    do
    {

        printf("\nIngrese una edad: ");
        scanf("%d", &edades);

        if(edades>max)
        {
            max=edades;
        }
        if(edades<min)
        {
            min=edades;
        }

        suma= suma + edades;

        cantidadEdades++;

        printf("\nDesea Ingresa otra edad? s/n: ");
        fflush(stdin);
        scanf("%c", &respuesta);

    }
    while(respuesta=='s');

    promedio= (float) suma / cantidadEdades;

    printf("\nEdad maxima Ingresada --> %d",max);
    printf("\nEdad minima ingresada --> %d",min);
    printf("\nCantidad de edades Ingresadas --> %d",cantidadEdades);
    printf("\nPromedio de edades --> %.2f", promedio);



    return 0;
}
