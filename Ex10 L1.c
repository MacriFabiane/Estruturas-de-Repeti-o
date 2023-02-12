/*10) Faça um programa que apresente uma tabela de lucro esperado, em decorrência do número de pessoas
e valor do ingresso. O valor do ingresso vai de R$ 15,00 até R$ 20,00 aumentando de R$ 0,50 centavos. É
informada a quantidade de pessoas.*/
#include<stdio.h>
int main (void)
{
    int num, cont=0;
    float i=15;

    printf ("Informe a quantidade de ingressos vendidos: ");
    scanf ("%d", &num);

    printf ("VALOR DO INGRESSO   VALOR TOTAL RECEBIDO\n");

    printf ("%.2f  \t \t     %.2f\n",i,num*i);
    do
    {

        cont++;
        i= i+0.5;
        printf ("%.2f   \t     %.2f\n",i, num*i);

    }while (cont<10);
}

