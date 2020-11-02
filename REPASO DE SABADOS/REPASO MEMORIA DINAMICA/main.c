#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{

    int* miVector;
    int i;
    int* aux;


    miVector= (int*) malloc(sizeof(int)*T);// *5 SON LOS ELEMENTOS

    for(i=0 ; i < T ; i++)
    {
        printf("ingrese un numero: ");
        scanf("%d", miVector+i); //+i ME PERMITE MOVERME EN EL VECTOR
    }

    printf("los primeros 5\n");
    for(i=0 ; i < T ; i++)
    {
        printf("%d\n", *(miVector+i));
    }

    aux = realloc(miVector, sizeof(int)*(T*2));//DICE DONDE EMPIEZA Y DONDE TERMINA

    if(aux!=NULL)
    {
        miVector = aux;
        for(i=T ; i < T+5 ; i++)// ARRANCA DE 5 PARA AGREGAR
        {
            printf("Agrego 5 mas: ");
            scanf("%d", miVector+i); //+i ME PERMITE MOVERME EN EL VECTOR
        }

        for(i=0 ; i < T+5; i++)
        {
            printf("%d\n", *(miVector+i));
        }



    }

        free(aux);
        free(miVector);


    return 0;
}
