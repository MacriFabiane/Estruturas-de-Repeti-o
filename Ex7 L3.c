//Fazer um programa que calcule o fatorial dos números inteiros de 1 até 12. Fazer com que a saída do programa seja mostrada como no exemplo a seguir:
#include<stdio.h>
int main (void)
{
    int cont=0;
    long long int produto, i, j;

    do
    {
        produto=1;
        for (i=1; i<=12; i++)
        {
            printf ("\n%lld! => %lld", i, i);
            cont++;
            //j=i;
            produto= produto * j;
            //j--;

            for (j=i; j>1; j--)
            {
                printf ("* %lld", j-1);
            }
            printf ("= %lld\n", produto);

        }

    }while (cont<i-1);
    return 0;

}
