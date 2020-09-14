#include <stdio.h>
#include <stdlib.h>


/*retorna 1 si el sexo es correcto 'f' o 'm'
int validarSexo(char sexoParametro)
en la biblioteca "validacion.h", hacer el ".c"
función
//retorna un sexo valido ('f' o 'm'), pide el dato por "scanf" y lo //validad usando la funcion "validarSexo"
char pedirSexo()
en la bilioteca "funciones.h", hacer el ".c"

llamar a la funcion en el Main y mostrar el sexo ingresad*/


char pidoDato();
int validarSexo(char sexoParametro);

int main()
{

    char sexo;

    sexo=pidoDato();

    printf("El sexo ingresado es : %c ", sexo);


    return 0;
}

char pidoDato()
{

    char sexo;

        printf("Ingrese sexo ' m ' - ' f ' --> "); // pedimos el sexo
        fflush(stdin);
        scanf("%c", &sexo);

    while(validarSexo(sexo)==1) // si es dato erroneo muestra el error
    {
        printf("Error...Reingrese sexo --> ");
        fflush(stdin);
        scanf("%c", &sexo);
    }


    return sexo; // devolvemos el sexo ingresado
}


int validarSexo(char sexoParametro) // validamos manejando retornos = 1 para el error y 0 para dato valido
{

    int retorno=0;

    if(sexoParametro != 'f' && sexoParametro != 'm') // si no es f ni m , el dato es erroneo
    {
        retorno=1; // dato erroneo
    }


    return retorno; // dato valido
}

