#include <stdio.h>
#include <stdlib.h>


/* Ejercicio de repaso
1)De 5  personas que ingresan al hospital se deben tomar y
validar los siguientes datos.
la inicial , temperatura, sexo y edad.
a)informar la cantidad de personas de cada sexo.
b)la edad promedio en total
c)la mujer con más temperatura(si la hay)
pedir datos y mostrar los resultados*/

int main()
{


    int personas=5;
    char nombre;
    char nombreMasTemperatura;
    float temperatura;
    char sexo;
    int edad;
    int suma=0;
    float promedio;
    int i;
    int contadorHombres=0;
    int contardorMujeres=0;
    float tempMaxima=0;
    int edadMaxima=0;

    for(i=0 ; i<personas ; i++)
    {

        printf("Ingrese la inicial de su nombre: ");
        fflush(stdin);
        scanf("%c", &nombre);

        printf("\nEdad: ");
        scanf("%d", &edad);

        printf("\nSexo: ");
        fflush(stdin);
        scanf("%c", &sexo);

        printf("\nIngrese su temperatura: ");
        scanf("%f", &temperatura);

        while(sexo=='f' && temperatura>tempMaxima && edad>edadMaxima)
        {
            tempMaxima=temperatura;
            edadMaxima=edad;
            nombreMasTemperatura=nombre;
        }



        if(sexo=='m')
        {
            contadorHombres++;
        }

        if(sexo=='f')
        {
            contardorMujeres++;
        }

        suma= suma + edad;


        system("cls");

    }

    promedio= (float)suma / personas;

    printf("\na)Informar la cantidad de personas de cada sexo\n Cantidad de Hombres: %d\n Cantidad de Mujeres: %d", contadorHombres, contardorMujeres);
    printf("\n\nb)La edad promedio en total\n Promedio: %.2f", promedio);
    printf("\n\nc)La mujer con mas temperatura\n %.2f Grados\n Edad: %d\n Inicial del nombre: %c", tempMaxima, edadMaxima, nombreMasTemperatura);


    return 0;
}
