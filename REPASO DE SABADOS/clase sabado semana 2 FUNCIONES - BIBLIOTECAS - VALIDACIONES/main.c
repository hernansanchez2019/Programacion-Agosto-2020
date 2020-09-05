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
    int codigo;
    int cantidadPrendas;
    float promedioTalleM=0;
    char talle;
    char talleSolicitado;
    int cantidadSolicitada=0;
    int codigoSolicitado=0;
    int cantidadS=0;
    int cantidadM=0;
    int cantidadL=0;
    int i;


    for(i=0; i < 5 ; i++)
    {

        do
        {
            printf("Ingrese el codigo entre 100 y 200: ");
            scanf("%d", &codigo);

        }
        while(codigo > 200 || codigo < 100);


        do
        {
            printf("Ingrese una cantidad entre 1 y 20: ");
            scanf("%d", &cantidadPrendas);
        }
        while(cantidadPrendas > 20 || cantidadPrendas < 1);


        do
        {
            printf("Ingrese un talle / s / m / l: ");
            fflush(stdin);
            scanf("%c", &talle);
        }
        while(talle !='s' && talle !='m' && talle !='l' );

        switch(talle)
        {
        case 's':
            cantidadS++;
        case 'm':
            cantidadM++;
        case 'l':
            cantidadL++;
        }

        if(cantidadSolicitada<cantidadPrendas)
        {
            cantidadSolicitada=cantidadPrendas;
            talleSolicitado=talle;
            codigoSolicitado=codigo;
        }

    }

    promedioTalleM= (float) cantidadM / 5;

    printf("\nCantidad mas solicitada %d ",cantidadSolicitada);
    printf("\nTalle mas solicitado %c ", talleSolicitado);
    printf("\nCodigo solicitado %d ", codigoSolicitado);
    printf("\nB -el promedio del total  de cantidades de talle 'M' = %.2f", promedioTalleM);







    /*Una función:
    Realizar una función que reciba el precio float y el porcentaje de descuento como entero
    ,retornar el precio con el descuento al main

    */
    return 0;
}
