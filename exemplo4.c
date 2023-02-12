#include <stdio.h>

int main (void)
{
    int i, num;


    do
    {
       printf ("Informe um valor: ");
       scanf ("%d", &num);

       if (num%2==0)
       {
           printf ("%d eh par\n", num);
       }
       else
       {
           printf ("%d eh impar\n", num);
       }
       i++;

    }
    while( i<=10);



    return 0;
}

