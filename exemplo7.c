#include<stdio.h>

int main (void)
{
    int num, num1, num2, in, i=0;
    char letra;

    do {
        printf("Insira o inicio do intevalo: ");
        scanf("%d", &num1);
        printf("Insira o final do intevalo: ");
        scanf("%d", &num2);
        printf("Insira o incremento do intevalo: ");
        scanf("%d", &in);
          if (num2<num1)
           {
               i= num2;
               num2=num1;
               num1=i;
           }

        for (i=1; i>=num1 && i<=num2; i=i+in)
        {
            printf ("%d \n", i);
        }
        printf ("Inicio do intervalo %d", num1);
        printf ("Final do intervalo %d", num2);
        printf ("Quer repetir o programa? s: ");
        setbuf(stdin, NULL);
        scanf ("%c", &letra);

    }while ( letra=='s' || letra=='S');

    return 0;
}

