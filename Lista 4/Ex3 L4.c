/*Fa�a um programa que solicite valores positivos para o limite inferior e superior de um intervalo e mostre os
n�meros primos do intervalo em ordem crescente e fa�a a soma dos d�gitos de cada n�mero primo.*/
#include<stdio.h>
#include<math.h>
int main (void)
{
    char ch;
    do
    {
         int limInf, limSup, i, j, contDiv, dig, contDig, M;
         float soma;

        do
        {
            printf ("\nInforme o limite inferior: ");
            scanf ("%d", &limInf);
            printf ("Informe o limite superior: ");
            scanf ("%d", & limSup);
        }while (limInf<0 || limSup<0);

        if (limInf>limSup)
        {
            limInf=limSup;
            limSup=limInf;
        }
        for (i=limInf; i<limSup; i++)
        {
            soma=0;
            contDiv=0;

            for (j=2; j<i; j++)
            {
                contDig=0;
                if (i%j==0)
                {
                    contDiv++;
                    break;
                }
            }
                if (contDiv==0 && i!=1)
                {
                   printf ("\n%d => ", i);

                   M=i;

                   do{
                   dig=M%10;
                   soma=soma+dig;
                   M=M/10;
                   }while(M!=0);

                   printf ("Soma dos digitos: %.2f", soma);
                }

        }



        printf ("\nDeseja repetir o programa? ");
        setbuf (stdin,NULL);
        scanf ("%c", &ch);

    }while (ch=='S'||ch=='s');
    return 0;
}

