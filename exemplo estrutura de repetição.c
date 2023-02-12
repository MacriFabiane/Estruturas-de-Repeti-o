#include <stdio.h>

int main (void)
{
    int i, num;//numero de interaçoes

    for (i=1; i<=10; i++) //vai imprimir 1 depois icrementa para dar o prox e assim vai
    {
        printf ("Informe um numero: ");
        scanf ("%d", &num);

        if (num%2==0)
        {
            ("%d eh par", num);
        }
        else
        {
            printf ("%d eh impar", num);
        }
    }

    return 0;
}
