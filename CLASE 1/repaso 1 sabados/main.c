#include <stdio.h>
#include <stdlib.h>

/*Ejercicio 01:
Se pide una cantidad indeterminada de edades enteras,
informar:
el máximo ingresado
el mínimo ingresado
el promedio
la cantidad de edades ingresadas */


int main()
{
  /*  int edades;
    int max=0;
    int min;

    //float promedio;
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

        cantidadEdades++;

        printf("\nDesea Ingresa otra edad? s/n: ");
        fflush(stdin);

        scanf("%c", &respuesta);


    }
    while(respuesta=='s');

    printf("\nEdad maxima Ingresada --> %d",max);
    printf("\nEdad minima ingresada --> %d",min);
    printf("\nCantidad de edades Ingresadas --> %d",cantidadEdades);

*/

    /* Ademas de la edad ingresar el estado civil de la persona ( 's' para soltera , 'c' para casada, 'd' divorciada)
    ademas de informar lo anterior ....informar:
    la persona mas joven de las casadas
    a persona mas Vieja de las solteras
    de los estados civiles , cual fue el mas ingresado*/



    /* Ejercicio de repaso
    1)De 5  personas que ingresan al hospital se deben tomar y
    validar los siguientes datos.
    la inicial , temperatura, sexo y edad.
    a)informar la cantidad de personas de cada sexo.
    b)la edad promedio en total
    c)la mujer con más temperatura(si la hay)
    pedir datos y mostrar los resultados*/



    int personas=5;
    char nombre[20];
    char nombreMasTemperatura[20];
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

        scanf("%s", nombre);

        printf("\nEdad: ");
        scanf("%d", &edad);

        printf("\nSexo: ");
        fflush(stdin);
        scanf("%c", &sexo);

        printf("\nIngrese su temperatura: ");
        scanf("%f", &temperatura);

        if(sexo=='f' && temperatura>tempMaxima && edad>edadMaxima)
        {
            tempMaxima=temperatura;
            edadMaxima=edad;
            nombreMasTemperatura[20]=nombre[20];
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
    printf("\n\nc)La mujer con mas temperatura\n %.2f Grados\n Edad: %d\n Inicial del nombre: %c", tempMaxima, edadMaxima, nombreMasTemperatura[20]);


    return 0;
    }
