 //Mostre os valores ímpares e não divisíveis por 5 entre 200 e 1. Apresente os valores em ordem
//decrescente. Faça a média dos valores desse intervalo que são divisíveis por 3 e por 5.
#include<stdio.h>
int main (void)
{
    int i=200, cont=0, soma=0;
    float media=0;

    printf ("==IMPARES E NAO DIVISIVEIS POR 5==\n");
    for (i<=200; i >1; i--)
    {
        if (i%2==1 && i%5!=0)
        {
            printf (" \t %d  \t", i);

        }
        if (i%5==0 && i%3==0)
        {
            i=i++;
            cont++;
            soma=soma + i;
        }
    }
    media = (float)soma/cont++;
    printf ("\nMedia dos numeros divisiveis por 5 e 3: %.2f", media);

    return 0;

}

