/*Implemente um programa que l� n�meros informados pelo usu�rio. O algoritmo deve parar quando informado um n�mero negativo. Para
cada n�mero lido, exceto o n�mero negativo que representa a sa�da, o algoritmo dever� imprimir a soma dos d�gitos.*/
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
