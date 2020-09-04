#include <stdio.h>
#include <stdlib.h>

/* Crear una función que reciba el radio de un
círculo y retorne su área.
*/

float radio();

int main()
{
    float area;

    area=radio();

    printf("El area es %.2f", area);

    return 0;
}

float radio()
{
    int radio;
    float DatoArea;

    printf("Ingrese el radio: ");
    scanf("%d", &radio);

    DatoArea= 3.14 * radio* radio;

    return DatoArea;

}

