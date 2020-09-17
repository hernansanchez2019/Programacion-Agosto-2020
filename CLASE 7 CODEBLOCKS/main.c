#include <stdio.h>
#include <stdlib.h>
#define EMPLEADOS 100


void inicializar(int edad[], float sueldo[], int empleados);
void cargarEmpleado(int edad[], float sueldo[], int empleados);
void promedioSueldos(float sueldo[], int empleados);
void mostrarEmpleados(int edad[], float sueldo[], int empleados);


int main(void)

{

    int edades[EMPLEADOS];
    float sueldo[EMPLEADOS];

    // inicializo

    inicializar(edades, sueldo, EMPLEADOS);


    // pedimos datos

    cargarEmpleado(edades,sueldo, EMPLEADOS);


    // mostramos datos

    mostrarEmpleados(edades, sueldo, EMPLEADOS);

    // mostramos promedio

    promedioSueldos(sueldo, EMPLEADOS);


    return 0;
}

void inicializar(int edad[], float sueldo[], int empleados)
{
    int i;

    for(i=0 ; i <empleados ; i++)
    {
        edad[i]=0;
        sueldo[i]=0;
    }

}

void cargarEmpleado(int edad[], float sueldo[], int empleados)
{
    int posicion;
    char respuesta;

    do
    {
        printf("Ingrese el numeros de legajo a cargar: ");
        scanf("%d", &posicion);

        printf("\nIngrese una edad: ");
        scanf("%d", &edad[posicion]);

        printf("Ingrese sueldo: ");
        scanf("%f", &sueldo[posicion]);

        printf("Desea cargar mas datos? s/n : ");
        fflush(stdin);
        scanf("%c", &respuesta);
    }
    while(respuesta=='s');
}

void mostrarEmpleados(int edad[], float sueldo[], int empleados)
{
    int i;

    printf("\n\t*** Legajos Cargados ***\n");

    for(i=0 ; i <empleados ; i++)
    {

        if(edad[i]!=0 && sueldo[i]!=0)
        {
            printf("\nLegajo= %d Edad= %d sueldo= %f\n",i, edad[i], sueldo[i]);
        }
    }
}

void promedioSueldos(float sueldo[], int empleados)
{
    int i;
    int suma=0;
    float promedio=0;
    int contadorPos=0;

    for(i= 0 ; i < empleados ; i++)
    {
        if(sueldo[i] > 0 )
        {
            suma= suma + sueldo[i];
            contadorPos++;
        }

    }

    promedio= (float)suma / contadorPos;

    printf("\nPromedio de sueldos: %f\n", promedio);

}
