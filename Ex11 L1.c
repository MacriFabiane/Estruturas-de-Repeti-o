//11) Faça um programa que mostre o resultado da seguinte soma, sendo n o valor informado pelo usuário:
//Soma = 1 + 1/2 + 1/3 + 1/4 + 1/5 + … + 1/n
#include<stdio.h>
int main (void)
{
    int cont=0, num;
    float i=1, j=1,k=1, soma=0;

    printf ("Insira um numero: ");
    scanf ("%d", &num);
    printf ("%.0f ", i);
    do
    {
        cont++;
        k=i/j++;
        soma=soma+k;
        printf (" + %.0f/%.0f ", i, j);

    }while ( j>0 && j<=num);
    printf ("\nSoma = %.2f", soma);

    return 0;
}
