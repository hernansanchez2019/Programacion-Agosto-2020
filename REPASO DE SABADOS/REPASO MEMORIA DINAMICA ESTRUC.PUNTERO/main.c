#include <stdio.h>
#include <stdlib.h> // DE ACA SALE EL MALLOC
#include <string.h>

/*typedef struct
{
    int a;
    char b;

}eDato;*/


typedef struct
{
    int id;
    char nombre[20];
}Eempleado;

Eempleado* crearEmpleado(void);//CONSTRUCTOR POR DEFECTO
Eempleado* crearEmpleadoConParametros(int,char*);//CONSTRUCTOR PARAMETRIZADO
 int mostrarUnempleado(Eempleado*);

int main()
{

    /*Eempleado* Pempleado;
    Pempleado = crearEmpleado();//ESA FUNCION DEVUELVE LOS DATOS CARGADOS

    if(Pempleado!=NULL)//SIEMPRE VERIFICAMOS QUE NO ESTE NULO
    {
        printf("%d  |  %s", Pempleado->id, Pempleado->nombre);

    }*/




    Eempleado* OtroPempleado;
    OtroPempleado = crearEmpleadoConParametros(29061,"Hernan");

     if(OtroPempleado!=NULL)//SIEMPRE VERIFICAMOS QUE NO ESTE NULO
    {
       if(!mostrarUnempleado(OtroPempleado))
       {
           printf("Error en la lectura");
       }
    }

   /* eDato lista[2]= {{1, 'R'} ,{2, 'H'}};
    eDato* Pdato;
    Pdato=lista;
    int i;

    for(i=0 ; i < 2 ; i++)
    {
        printf("Ingrese division: ");
        scanf("%d", &(Pdato+i)->a);

        printf("Ingrese Curso: ");
        fflush(stdin);
        scanf("%c", &(Pdato+i)->b);
    }


    for(i=0 ; i < 2 ; i++)
    {
        printf("%d -- %c \n",(Pdato+i)->a,(Pdato+i)->b);
    }


    //printf("%d", sizeof(eDato*));

    eDato miDato={1,'E'};//DATOS DE LA ESTRUCTURA
    eDato* pDato;// ESTRUCTURA PASADA PUNTERO

    pDato= &miDato;//LE PASAMOS AL PUNTERO LA DIRECCION DE LA ESTRUCTURA

    printf("%d --- %c", (*pDato).a, (*pDato).b);//(*PDATO)PRIMERO ACCEDEMOS AL DATO Y DESPUES AL CAMPO A O B

    */

    return 0;
}

// void* malloc(int) //PUNTERO A VOID PUEDE DEVOLVER CUALQUIER COSA

//CONSTRUCTOR: CONSTRUYE ESPACIO EN MOMERIA E INICIALIZA VALORES
Eempleado* crearEmpleado(void) //LA FUNCION DEVUELVE UN PUNTERO A ESTRUCTURA
{
    Eempleado* Pempleado;//ESTRUCTURA PUNTERO

     //         SE CASTEA A ESTRUCTURA PUNTERO AL MALLOC
    Pempleado= (Eempleado*)malloc(sizeof(Eempleado));//MALLOC SE ENCARGA DE DECIRLE AL SISTEMA QUE BUSQUE ESPACIO EN EL HEAP PARA ESE PUNTERO
   //HARDCODEAMOS DATOS
    //INICILIZAMOS ESPACIO EN MEMORIA CON VALOES
   if(Pempleado!=NULL)//SIEMPRE VERIFICAMOS QUE NO ESTE NULO
   {
    Pempleado->id=0;
    strcpy(Pempleado->nombre,"\0");

   }


    return Pempleado;
}

Eempleado* crearEmpleadoConParametros(int id,char* nombre)//CONSTRUCTOR PARAMETRIZADO
{
    Eempleado* Pempleado;

    Pempleado = crearEmpleado();

    if(Pempleado!=NULL)//SIEMPRE VERIFICAMOS QUE NO ESTE NULO
   {
    Pempleado->id=id;
    strcpy(Pempleado->nombre,nombre);

   }


    return Pempleado;
}

int mostrarUnempleado(Eempleado* Pempleado)
{
    int exito= 0; // COMO UNA BANDERA

    if(Pempleado!=NULL)
    {

        printf("%d  |  %s", Pempleado->id, Pempleado->nombre);
        exito= 1;
    }

    return exito;
}
