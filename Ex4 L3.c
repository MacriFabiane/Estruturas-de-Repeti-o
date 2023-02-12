/* Escreva um programa que leia o valor de uma aplicação, o percentual de rendimento mensal obtido por esta aplicação e o período
do investimento; e retorne o valor da aplicação ao final do período de investimento. */
#include <stdio.h>
int main (void)
{
    float valAp, perc, valorF;
    int mes, i;
    char ch;
    do
    {
    do
    {
        printf ("Informe o valor da aplicacao: ");
        scanf ("%f", &valAp);
        printf ("Informe percentual de rendimento (0 a 1): ");
        scanf ("%f", & perc);
        printf ("Informe o periodo em meses: ");
        scanf ("%d",& mes);

        if (valAp<=0 || ( perc<=0 || perc>1) || mes<=0)
        {
            printf ("Informe valores positivos.");
            printf ("Informe o valor da aplicacao: ");
            scanf ("%f", &valAp);
            printf ("Informe percentual de rendimento (0 a 1): ");
            scanf ("%f", & perc);
            printf ("Informe o periodo em meses: ");
            scanf ("%d",& mes);
        }
    }while (valAp<=0 || ( perc<=0 || perc>1) || mes<=0);
    printf ("MES\t\tPORCENTAGEM\t\tVALOR APLICADO\n");
    for (i=1; i<=mes; i++)
    {
        if (i%12==0)
        {
            perc=perc+0.25;
        }
        valorF=valAp+valAp*perc;
        valAp=valorF;
        printf("%d\t\t%.2f\t\t\t%.2f\n", i, perc,valorF);
    }
     printf ("Deseja repetir o processo?  ");
     setbuf(stdin, NULL);
     scanf ("%c", &ch);
    }while (ch == 'S' || ch == 's');
    return 0;
}
