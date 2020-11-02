#include <stdio.h>
#include <stdlib.h>

int pedirValorEntero(char*,int*); // char*==char[];

//void swap(int*, int*);

int main()
{
    int a;

   if( pedirValorEntero("Ingrese un Numero: ", &a)==1)
   {
        printf("El valor de a= %d ", a);
   }

   else
   {
       printf("hubo un error");
   }




    /*int a= 100;
    int* pEntero= NULL;

    pEntero = &a; // APUNTA AL VALOR DE A = 100

    if(pEntero != NULL)// VERIFICAMOS QUE NO SEA NULO
    {
        printf("%d\n", a);// VARIABLE / 100
        printf("%d\n", *pEntero);// VALOR DEL PUNTERO /100
        printf("%d\n", pEntero); //DIRECCIONES DE MEMORIA
        printf("%d\n", &a);//DIRECCIONES DE MEMORIA
        printf("%d\n", &pEntero);//DIRECCION DE MEMORIA DEL PUNTERO
    }
    else
    {
        printf("no es posible");
    }*/






    /*int a;
    int b;

    a=6;
    b=10;

    swap(&a,&b);

    printf("a= %d -- b= %d", a,b);*/
    return 0;
}

/*void swap(int* x, int* y)// x E y HACEN REFERENCIA A LOS PARAMTROS ACTUALES DE LA FUNCION
{
    int auxZ;//VARIABLE LOCAL DE LA FUNCION

    if(x!= NULL && y!=NULL)
    {
        auxZ= *x;
        *x= *y;
        *y= auxZ;
    }

}*/

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
