#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*  EL TEXTO  BINARIO SE VUELVA A LA MEMORIA, Y EL MODO TEXTO TRANFORMADO EN ASCII

            r Abre un archivo de texto para operaciones de lectura.
            w Abre un archivo de texto para operaciones de escritura ( LEER , ESCRIBIR , SOBREESCRIBE )
            a Abre un archivo de texto para añadir datos. ( LEE , ESCRIBE, SIN PISAR NADA LO VUELVE A ESCRIBIR AL LADO)
            rb Abre un archivo binario para operaciones de lectura.
            wb Abre un archivo binario para operaciones de escritura.
            ab Abre un archivo binario para añadir datos.
            r+b Abre un archivo binario para operaciones de lectura escritura.
            w+b Abre un archivo binario para operaciones de lectura escritura.
            a+b Abre un archivo binario para operaciones de lectura escritura.
            r+ Abre un archivo de texto para operaciones de lectura escritura.
            w+ Abre un archivo de texto para operaciones de lectura escritura

      */

    FILE *punteroArchivo;

    char nombre[20]="Hernan";
    int edad=28;
    float altura=1.70;

    punteroArchivo= fopen("Datos.csv","a");// ABRIMOS EL ARCHIVO

    if(punteroArchivo!=NULL)
    {
        printf("Archivo creado !!!");
        fprintf(punteroArchivo," %s ,  %d  ,  %f\n", nombre,edad,altura); // ESCIBIMOS EN EL ARCHIVO.TXT
        fclose(punteroArchivo); // CERRAMOS EL ARCHIVO

    }
    else
    {
        printf("Error...fallo");
    }


    // LEER EL PRIMERO RENGLON DEL ARCHIVO

    char auxRenglon[100];

    punteroArchivo= fopen("Datos.txt","r");// ABRIMOS EL ARCHIVO

    if(punteroArchivo!=NULL)
    {
        while(!feof(punteroArchivo))// MIENTRAS NO SE TERMINE EL ARCHIVO
        {
            fgets(auxRenglon,100,punteroArchivo);
            printf("El dato es : %s\n", auxRenglon);
        }
        fclose(punteroArchivo); // CERRAMOS EL ARCHIVO

    }
    else
    {
        printf("Error...fallo");
    }




    return 0;
}
