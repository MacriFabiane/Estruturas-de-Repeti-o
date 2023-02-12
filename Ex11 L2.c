//11) Faça o programa que apresente a seguinte saída como no exemplo, solicitando ao usuário o número máximo (deve ser positivo).
#include <stdio.h>
int main (void)
{
    int num, i=0, cont=0;

    printf ("Informe um numero positivo: ");
    scanf ("%d", &num);

    do
    {
        cont++;
        i++;
        printf ("%d\t%d\t%d\t%d\t%d\n", i, i, i, i, i);
    }while(cont<num);
    return 0;
}

