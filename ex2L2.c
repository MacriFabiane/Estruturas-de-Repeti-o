//2) Fa�a um programa que imprima os n (indicado pelo usu�rio) primeiros n�meros pares (come�a em 0). Apresente 5 valores por linha.
#include<stdio.h>
int main (void)
{
    int num, i=0,cont=0;

    printf ("Insira a quantidade de numeros pares desejados: ");
    scanf("%d", &num);

    printf ("%d\t", i);


        do
        {
             cont++;
             i=i+2;
            if(i%10!=0)
           {

            printf ("%d\t",i);

           }
           else
           {
               printf ("\n%d\t", i);
           }

        }while(cont<(num-1));



}
