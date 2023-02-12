#include<stdio.h>
int main (void)
{
    char choice;
    do
    {
         int i, d, e, num=1000, num2=9999;
         float soma;
         for (i=num; i<=num2; i++)
     {
         soma=0;

         d=i/100;

         e=(i-(d*100));

         soma=d+e;

        if (soma*soma==i)
         {
             printf ("%d\t", i);
         }

     }

     printf ("\nDeseja repetir o programa?(S/N) ");
     scanf("%c", & choice);
     setbuf(stdin, NULL);

    }while(choice=='S'||choice=='s');

    return 0;
}

