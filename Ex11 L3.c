//Sendo n um n�mero positivo, apresentar as n primeiras ra�zes quadradas exatas. A fun��o para obter a raiz quadrada � a sqrt() e est� na biblioteca math.h.
#include <stdio.h>
#include <math.h>
int main (void)
{
    int num1, num=99999, contn=0, j, i;
    float k;
    char ch;
    do{
    do
    {
        printf ("Informe o valor de n: ");
        scanf("%d", & num1);

    }while (num1<0);
    do{

        for (j=1; j<=num1; j++)
        {
            i= j*j;
            k= sqrt(i);

            if (k==j)
            {
                printf ("Raiz quadrada de %d ==> %.0f\n", i, k);
                contn++;
            }

       }
    }while (contn<j-1);
    printf ("Deseja repetir o programa?");
    setbuf(stdin, NULL);
    scanf ("%c", & ch);
    }while (ch =='S' || ch=='s');
    return 0;
}
