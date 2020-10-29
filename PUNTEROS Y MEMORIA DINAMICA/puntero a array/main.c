#include <stdio.h>
#include <stdlib.h>
//Variable puntero que apunta al primer elemento de un arreglo.
​
int main()
{
    int vec[10];
    int* p;  //Puntero al primer elemento de un vector
    int i;
    ​
//EL puntero p apunta a la dirección del primer elemento del vector
    p=vec;
    ​
    printf("-->Direccion de p, %p", &p);
    printf("\n-->Elemento de p, %p", p);
    printf("\n-->Direccion de vec, %p", vec);
    ​
    ​
    for(i=0; i<10; i++)
    {
        vec[i]= i;
    }
    ​
    ​
    for (i=0; i<10; i++)
    {
        printf("\n\n Elemento Nomenclatura vectorial: %d", vec[i]);
        printf("\n Elemento  Aritmetica de Punteros: %d", *(p+i));
        printf("\n Direccion de vec[i] %p", &vec[i]);
        printf("\n Direccion de Punteros: %p", (p+i));
        ​
    }
    ​
}
  /*#include <stdio.h>
#include <stdlib.h>
//Vector de Punteros
//Cargar un vector con las direcciones de memoria de variables
​
int main()
{
int i;
int var1=100, var2=200, var3=300,var4=400, var5=500;
//Vector de Punteros
int* vec[5];
​
vec[0]=&var1;
vec[1]=&var2;
vec[2]=&var3;
vec[3]=&var4;
vec[4]=&var5;
​
printf("\nDir de memoria de var1: %p ", &var1);
printf("\nDir de memoria de var2: %p ", &var2);
printf("\nDir de memoria de var3: %p ", &var3);
printf("\nDir de memoria de var4: %p ", &var4);
printf("\nDir de memoria de var5: %p ", &var5);
​
​
for (i=0;i<5;i++){
   printf("\nValores del vector: %p ", vec[i]);
}
​
printf("\nValor de var1: %d ", var1);
printf("\nValor de var2: %d ", var2);
printf("\nValor de var3: %d ", var3);
printf("\nValor de var4: %d ", var4);
printf("\nValor de var5: %d ", var5);
​
for (i=0;i<5;i++){
   printf("\n                    Valores de lo apuntado por cada elemento del vector: %d ", *vec[i]);
   printf("\n Notacion Punteros: valores de cada elemento del vector: %p ", *(vec+i));
   printf("\n Notacion Punteros: Valores de lo apuntado por cada elemento del vector: %d ", **(vec+i));
​
}
​
    return 0;
}*/
