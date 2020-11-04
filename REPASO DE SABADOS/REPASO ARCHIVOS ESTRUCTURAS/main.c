#include <stdio.h>
#include <stdlib.h>


// LECTURA Y ESCRITURA DE BINARIO

typedef struct
{
    int id;
    char nombre[20];
    char apellido[20];
    int edad;
    float altura;
}ePersona;

int main()
{
    ePersona unaPersona={29061,"Hernan","Sanchez",28, 1.70};
    ePersona auxPersonaLeida;
    FILE *punteroArchivo= fopen("datosPersona.dat", "ab");

    if(punteroArchivo!=NULL)
    {
        fwrite(&unaPersona,sizeof(ePersona),1,punteroArchivo);
        fclose(punteroArchivo);
    }

    FILE *punteroArchivo2= fopen("datosPersona.dat", "rb");

    if(punteroArchivo2!=NULL)
    {
        fread(&auxPersonaLeida,sizeof(ePersona),1,punteroArchivo2);
        printf("nombre:%s, apellido:%s, edad:%d , altura:%f", auxPersonaLeida.nombre, auxPersonaLeida.apellido, auxPersonaLeida.edad, auxPersonaLeida.altura);
        fclose(punteroArchivo2);
    }


    return 0;
}
