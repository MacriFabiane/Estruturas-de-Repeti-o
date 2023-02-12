#include<stdio.h>
int main (void)
{
   int idade=1, cont=0, soma=0;

   printf ("Valor do cont antes do while: %d", cont);
   while (idade>0)
   {
       printf ("Informe a idade: ");
       scanf ("%d", &idade);

       if (idade >=18)
       {
           cont++;
           soma =soma + idade;
       }
   }

   printf ("Quantidade de people maiores de 18: %d\n", cont++);
    printf ("Soma das idades dos maiores: %d", soma);
   return 0;
}
