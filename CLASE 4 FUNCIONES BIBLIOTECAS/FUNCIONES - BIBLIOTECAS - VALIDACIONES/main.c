#include <stdio.h>
#include <stdlib.h>


int pedirEntero(char texto[],char textoError [], int min, int max); //[]string PARAMETROS
int validarEntero(int dato,int min, int max);

int main()
{

    int legajo;
    int edad;
    int nota;
    int codigoPostal;

    // LLAMAMOS A LA FUNCION PEDIReNTERO Y LE PASAMOS EL TEXTo


    legajo=pedirEntero("Ingrese legajo: ","Error...legajo incorrecto: " ,1,1000); // DETERMINAMOS EL MENSAJE , EL MENSAJE ERROR,  EL MAXIMO Y EL MINIMO
    edad=pedirEntero("Ingrese edad: ","Error...Reingrese edad: ", 18, 100);// DETERMINAMOS EL MENSAJE , EL MENSAJE ERROR, EL MAXIMO Y EL MINIMO
    nota=pedirEntero("Ingrese nota: ","La nota no es valida..." ,1,10);// DETERMINAMOS EL MENSAJE , EL MENSAJE ERROR,EL MAXIMO Y EL MINIMO
    codigoPostal=pedirEntero("Ingrese codigo postal: ","Cp Inexistente...Reingrese: ", 1000, 2000);// DETERMINAMOS EL MENSAJE , EL MAXIMO Y EL MINIMO

    printf("Legajo: %d \tEdad: %d \tNota: %d \tCodigo Postal: %d",legajo,edad,nota,codigoPostal);

    return 0;
}
int pedirEntero(char texto[],char textoError [], int min, int max) // DEVUELVE UN ENTERO, PARAMETRO FORMAL CHAR[]
{
    int datoIngresado;

    printf("%s",  texto); // GUARDAMOS EL TEXTO
    scanf("%d", &datoIngresado); // GUARDAMOS EL NUMERO

    while(validarEntero(datoIngresado,min,max)==0) // VALIDAMOS NUMEROS MAXIMOS Y MINIMOS,  SI DA CERO MOSTRAMOS ERROR
    {
        printf("%s",textoError); // GUARDAMOS EL TEXTO ERRONEO DESDE EL MAIN
        scanf("%d", &datoIngresado);// GUARDAMOS EL NUMERO
    }

    return datoIngresado;
}

int validarEntero(int dato,int min, int max)

{
    int valido=1; //BANDERA

    if(dato < min || dato > max)// PARA SABER SI PASO LA VALIDACION
    {
        valido=0; // FALSO
    }

    return valido;

}
