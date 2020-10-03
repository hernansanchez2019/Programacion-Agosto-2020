#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int idDivision;
    char nombreDivision[20];
    int cuatrimestre;

} Edivision;

typedef struct
{
    int idAlumno;
    char nombre[20];
    char apellido[20];
    int edad;
    int idDivision;

} Ealumno;

void hardCodearDivisiones(Edivision lista[], int cantidad);
void hardCodearAlumnos(Ealumno lista[], int cantidad);
void listadoDivision(Edivision listaDivision[], int cantidad);
void listadoAlumnos(Ealumno listaAlumnos[], int cantidad);
void listadoAlumnosConDivision(Ealumno listaAlumnos[], int CantidadAlumnos, Edivision listaDivision[], int CantidadDivisiones);


int main()
{

    Edivision listaDivisiones[3];
    Ealumno listaAlumnos[10];

    hardCodearDivisiones(listaDivisiones,3);
    hardCodearAlumnos(listaAlumnos,10);


    listadoDivision(listaDivisiones,3);
    listadoAlumnos(listaAlumnos,10);
    listadoAlumnosConDivision(listaAlumnos,10, listaDivisiones, 3);



    return 0;
}

void listadoDivision(Edivision listaDivision[], int cantidad)
{
    int i;

    printf("Listado de Cursos UTN\n\n");

    printf("ID NOMBRE DIV.  CUATRIMESTRE\n");

    for(i=0 ; i < cantidad ; i++)
    {
        printf("%d %3s %15d\n", listaDivision[i].idDivision,
               listaDivision[i].nombreDivision,
               listaDivision[i].cuatrimestre);
    }
}

void listadoAlumnos(Ealumno listaAlumnos[], int cantidad)
{

    int i;

    printf("\n\t\tListado de Alumnos UTN\n\n");

     printf("ID            NOMBRE       APELLIDO   EDAD ID DIV.\n");

    for(i=0 ; i < cantidad ; i++)
    {

        printf("%4d %15s %15s %3d %3d\n",listaAlumnos[i].idAlumno,
               listaAlumnos[i].nombre,
               listaAlumnos[i].apellido,
               listaAlumnos[i].edad,
               listaAlumnos[i].idDivision);

    }

}

//
void listadoAlumnosConDivision(Ealumno listaAlumnos[], int CantidadAlumnos, Edivision listaDivision[], int CantidadDivisiones)
{

    int i;
    int j;

    printf("\nListado de Alumnos UTN con su Curso\n\n");

    for(i=0; i < CantidadAlumnos ; i++) // RECORRE EL LISTADO DE ALUMNOS
    {
        for(j=0 ; j < CantidadDivisiones ; j++) // RECORRE EL LISTADO DE DIVISIONES
        {
            if(listaAlumnos[i].idDivision == listaDivision[j].idDivision)// BUSCA LA COINCIDENCIA DE ID DE AMBOS LISTADOS
            {
                printf("%4d %15s %15s %3d %5s\n", listaAlumnos[i].idAlumno,
                       listaAlumnos[i].nombre,
                       listaAlumnos[i].apellido,
                       listaAlumnos[i].edad,
                       listaDivision[j].nombreDivision);
                break;
            }
        }
    }




}

void hardCodearDivisiones(Edivision lista[], int cantidad)
{

    int idDivision[3]= {1,2,3};
    char nombreDivision[3][20]= {"1C","2B","3E"};
    int cuatrimestre[3]= {2,3,1};

    int i;

    for(i=0; i < cantidad ; i++)
    {
        lista[i].idDivision= idDivision[i];
        strcpy(lista[i].nombreDivision, nombreDivision[i]);
        lista[i].cuatrimestre= cuatrimestre[i];
    }

}

void hardCodearAlumnos(Ealumno lista[], int cantidad)
{

    int idAlumno[10]= {100,101,102,103,104,105,106,107,108,109};
    char nombre[10][20]= {"Hernan", "Valeria", "Gaston", "Facundo", "Maria", "Roberto", "Gisela", "Ariel", "Mariano", "Mario"};
    char apellido[10][20]= {"Sanchez", "Perez", "Alvarez", "Soza", "Gonzalez", "Moyano", "Garcia", "Barla", "Gomez", "Roselli"};
    int edad[10]= {26,45,26,29,46,19,28,30,23,29};
    int idDivision[10]= {1,2,3,1,2,2,3,1,1,3};

    int i;

    for(i=0; i < cantidad ; i++)
    {
        lista[i].edad= edad[i];
        lista[i].idAlumno= idAlumno[i];
        lista[i].idDivision=idDivision[i];
        strcpy(lista[i].apellido, apellido[i]);
        strcpy(lista[i].nombre, nombre[i]);
    }

}

