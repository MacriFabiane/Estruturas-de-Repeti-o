/*Na matemática, o fatorial de um número é o produto de todos os inteiros positivos menores ou iguais ao número. Exemplo: Fatorial
de 5 é 1 * 2 * 3 * 4 * 5 = 120. Elabore um programa que calcule e mostre o fatorial de um número informado pelo usuário. Validar
esse número para que esteja em um intervalo de 1 a 20. Lembrando que fatorial de 1 = 1 e fatorial de 0 = 1*/
#include <stdio.h>
int main (void)
{
    long long int fat, produto=1;
    int  i=1, contfat=0;

    do
    {
        printf ("Digite um numero para descobrir o fatorial dele: ");
        scanf ("%lld", &fat);

        if (fat<0 || fat>20)
        {
            printf ("numero invalido\n");
        }

    } while(fat<0 || fat>20);
    printf ("%lld !=  %lld ", fat, fat);
    do
    {
        printf(" * %lld \t", fat-1);
        produto *= fat;
        fat--;

    }while (contfat<fat-1);

    printf ("= %lld", produto);
    return 0;
}
