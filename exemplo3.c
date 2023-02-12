#include <stdio.h>

int main (void)
{
    int i=0, num;//numero de interaçoes

    printf ("Informe um numero: ");
    scanf ("%d", &num);

    while(i<=10)
    {
        printf ("%2d * %2d = %2d\n", num, i, num*i);
        i++;
    }


    return 0;
}
