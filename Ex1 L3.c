//1) Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um número que
//atende essa condição. Esse número representa a quantidade de números primos a serem mostrados.
#include<stdio.h>
int main (void)
{
    int num, i, contDiv, contPrimos, j;
    char ch;
    do{
            i=2;
            contPrimos=0;
        do
        {
        printf ("Informe a quantidade de numeros primos a serem imprimidos: ");
        scanf ("%d", & num);
           if (num<0)
            {
            printf ("Informe um valor POSITIVO!\n");
            printf ("Informe a quantidade de numeros primos a serem imprimidos: ");
            scanf ("%d", & num);
            }
        }while(num<0);
        do
        {
            contDiv=0;
            for (j=1; j<=i; j++)
        {

            if (i%j == 0)
                {
                    contDiv++;
                }

        }
        if (contDiv==2)
        {
            printf ("%d\t", i);
            contPrimos++;

        }
        if (contPrimos==5)
        {
            printf ("\n");
        }
        i++;
        }while (contPrimos<num);

        printf ("Deseja repetir o processo? (S/n)");
        setbuf (stdin, NULL);
        scanf ("%c", &ch);
    }while(ch == 'S' || ch == 's');
   return 0;

}
