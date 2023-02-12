/*7) Elaborar um programa que determine a potência de um número. O usuário informa a base e o expoente e o
programa informa o resultado da base elevada ao expoente. Não usar funções prontas do C para fazer o cálculo da
potência*/
#include<stdio.h>
int main (void)
{
    int i, base, exp, cont=0, mult=1;

        printf ("Informe a base da potencia: ");
        scanf("%d", &base);
        printf ("Informe o expoente da potencia: ");
        scanf("%d", &exp);
        printf ("%d", base);

        i=base;
    do
    {
        cont++;
        printf(" * %d", i);
        mult=base*i;
        base=mult;

    }while (cont<exp-1);
    printf (" = %d", mult);

    return 0;
}
