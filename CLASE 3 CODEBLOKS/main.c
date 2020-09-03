#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



/*Realizar un Menú que muestre las opciones:

a-Saludar
b-Brindar
c-Despedirse
d-Salir

Nota:
-Antes de salir preguntar si "esta seguro que desea salir?"
-Si Brinda sin haber saludado, debe avisar "Debe saludar antes de Brindar" y no deja continuar
-Si se despide antes de saludar debe avisar "Debe saludar antes de despedirse" y no deja continuar
-Si se despide antes de brindar debe avisar "Debe brindar antes de despedirse" y no deja continuar.*/


int main(void)
{
    char respuesta;
    int flag=0; // EN 0 ENTRA A LOS MENSAJES DE ALERTA, UNA VEZ QUE SE SALUDA AHI CAMBIAR EL VALOR A 1 PERMITIENDO ENTRAR A LOS SALUDOS BRINDAR Y DESPEDIRSE

    do
    {
        printf(" Elija una opcion\n\n a-Saludar\n b-Brindar\n c-Despedirse\n d-Salir : " );
        fflush(stdin);
        scanf("%c", &respuesta);

        switch(respuesta)
        {
        case 'a':

            if(flag==0)
            {
                printf("\nHola Bienvenido !!!\n");
                system("PAUSE");
                system("cls");
                flag=1;
                break;
            }


        case 'b':
            if(flag==0)
            {
                printf("\nDebe saludar antes de Brindar\n");
                system("PAUSE");
                system("cls");
                break;
            }
            else
            {
                printf("\nChin Chin !!!\n");
                system("PAUSE");
                system("cls");
                break;
            }

        case 'c':

            if(flag==0)
            {
                printf("\nDebe saludar antes de despedirse\n");
                system("PAUSE");
                system("cls");
                break;

            }
            else
            {
                printf("\nChauuuu !!!\n");
                system("PAUSE");
                system("cls");
                flag=0;
                break;
            }

        case 'd':
            printf("\nEsta seguro que desea salir? s/n : ");
            fflush(stdin);
            scanf("%c", &respuesta);
            system("cls");
            break;


        }

    }
    while(respuesta!='s');



    return 0;
}
