#include <stdio.h>
#include <stdlib.h>
#include "FUNCIONES.h"
#define EMPLEADOS 100

int main(void)

{

    // CARGA ALEATORIA

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
