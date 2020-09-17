#include <stdio.h>
#include <stdlib.h>
#define EMPLEADOS 100

int main(void)

{
    //setbuf(stdout,NULL);

    int edades[EMPLEADOS];
    int sueldo[EMPLEADOS];
    int posicion;
    char respuesta;
    int i;
    float promedio=0;
    int suma=0;
    int contadorPos=0;

    // inicializo

    for(i=0 ; i <EMPLEADOS ; i++)
    {
        edades[i]=0;
        sueldo[i]=0;
    }


    // pedimos datos


    do
    {
        printf("Ingrese el numeros de legajo a cargar: ");
        scanf("%d", &posicion);

        printf("\nIngrese una edad: ");
        scanf("%d", &edades[posicion]);

        printf("Ingrese sueldo: ");
        scanf("%d", &sueldo[posicion]);

        printf("Desea cargar mas datos? s/n : ");
        fflush(stdin);
        scanf("%c", &respuesta);

        suma= suma + sueldo[posicion];

        contadorPos++;

    }
    while(respuesta=='s');

    promedio= (float)suma / contadorPos;


    //	 mostramos datos

    for(i=1 ; i <EMPLEADOS ; i++)
    {

        printf("Legajo= %d Edad= %d sueldo= %d\n", i, edades[i], sueldo[i]);
    }

    printf("Promedio de sueldos: %f", promedio);



    return 0;
}
