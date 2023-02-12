/*Implemente um programa que lê números informados pelo usuário. O algoritmo deve parar quando informado um número negativo. Para
cada número lido, exceto o número negativo que representa a saída, o algoritmo deverá imprimir a soma dos dígitos.*/
#include<stdio.h>
int main (void)
{
    int num, dig1, dig2,dig3, soma=0;
    do
    {
        printf ("Insira um numero:  ");
        scanf ("%d", &num);

        if (num<0)
        {
            break;
        }
        soma=0;
       while (num !=0)
       {
           soma= soma+(num%10);
           num= num/10;
       }
        printf ("Soma dos digitos eh: %d\n", soma);

    }while (num>=0);
}
