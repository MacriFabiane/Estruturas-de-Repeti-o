//1) Escreva um algoritmo que gere a s�rie de Fibonacci at� o termo n que � informado pelo usu�rio. A s�rie de
//Fibonacci � formada pela sequ�ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... , etc
#include<stdio.h>
int main (void)
{
    int num, i=1, cont=0, i2=1, ant=1, atu=1, prox;
    printf ("Insira um numero: ");
    scanf ("%d", &num);
    printf ("%d\t%d\t", ant, atu);
   for (i=2; i<=num-1; i++ )
   {
       prox=ant+atu;
       printf("%d\t", prox);
       ant= atu;
       atu=prox;
   }
    //ant=i;
}
