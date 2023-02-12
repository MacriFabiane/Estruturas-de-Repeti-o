//7) Em um intervalo de 0 a 100, apresentar: a) Os números divisíveis por 3. b) O quadrado dos números divisíveis por 3.
//c) Os números divisíveis por 5 ou por 7.d) A raiz quadrada dos números divisíveis por 5 ou por 7
#include <stdio.h>
#include <math.h>

int main (void)
{
    int i=1,j=1,k=1,l=1;

    printf ("===DIVISIVEIS POR 3===\n");
    for (i>=0; i<=100; i++)
    {
        if (i%3==0)
        {
            printf ("%d\t", i);
        }
    }


    printf ("\n=== O QUADRADO DOS DIVISIVEIS POR 3===\n");

   for (j>=0; j<=100; j++)
    {
        if (j%3==0)
        {
            printf ("%d\t", j*j);
        }
    }

   printf ("\n===DIVISIVEIS POR 5 e 7 ===\n");

   for (k>=0; k<=100; k++)
    {
        if (k%7==0 || k%5==0)
        {
            printf ("%d\t", k);
        }
    }

   printf ("\n=== RAIZ QUADRADA DOS DIVISIVEIS POR 5 e 7 ===\n");

   for (l>=0; l<=100; l++)
    {
        if (l%7==0 || l%5==0)
        {
           printf ("%lf\t", sqrt((double)l));
        }
    }


    return 0;


}
