#include <stdio.h>
#include <stdlib.h>

int pedirValorEntero(char*,int*);

int main()
{
    int miVector[5]={1,12,4,2,9};
    int* pVector;
    int i;

    pVector= miVector;

    printf("puntero a vectores\n\n");

    for(i=0 ; i < 5 ; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", pVector+i);
    }


    for( i=0 ; i < 5 ; i++)
    {
        printf("%d\n", *(pVector+i));//devuelve las direcciones de memoria despues accede al valor*
    }



    int a;
    int* pInt;

    pInt= &a;

    printf("%d|\n", &a);//direcciones de mem.
    printf("%d|\n", pInt);//direcciones de mem.
    printf("%d|\n", pInt+0);
    printf("%d|\n", pInt+1);//suma 4 bytes
    printf("%d|\n", pInt+2);//suma 8 bytes



    return 0;
}
int pedirValorEntero(char* msj,int* pInt)
{
    int ret= 0;

    if( msj!=NULL && pInt != NULL)
    {
        printf("%s", msj);
        scanf("%d", pInt);
        ret= 1;
    }


    return ret;
}
