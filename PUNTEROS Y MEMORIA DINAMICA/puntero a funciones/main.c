#include <stdio.h>
#include <stdlib.h>

//void saludar();


void sumar(int parametroA, int parametroB, int* pResultado);
void restar(int parametroA, int parametroB, int* pResultado);
int calcular(int parametroA, int parametroB, void(*pFuncion)(int,int,int*));

int main()
{

    int auxiliar;

    auxiliar= calcular(10,5,restar);
    printf("El resultado de la resta es %d\n", auxiliar);

    auxiliar= calcular(10,5,sumar);
    printf("El resultado de la suma es %d", auxiliar);


/*
    void (*pFuncion)(void);
    pFuncion= saludar;
    pFuncion();*/

    return 0;
}

/*
void saludar()
{
    printf("Hola");
}
*/

void sumar(int parametroA, int parametroB, int* pResultado)
{
    *pResultado= parametroA + parametroB;
}

void restar(int parametroA, int parametroB, int* pResultado)
{
    *pResultado= parametroA - parametroB;
}

int calcular(int parametroA, int parametroB, void(*pFuncion)(int,int,int*))
{

    int auxResultado;
    pFuncion(parametroA,parametroB,&auxResultado);
    return auxResultado;

}
