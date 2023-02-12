//Ler um número maior que 2 e imprimir todos os pares entre 2 e o número lido. Imprimir a soma dos pares,
//o produto dos ímpares que são divisíveis por 9 e a média de todos os números do intervalo.
#include<stdio.h>

int main (void)
{
    int num, i, soma=0, produto=1, cont=0, soma2=0, soma1=0;
    float media;
    //validar entrada para num ser >2
    do
    {
      printf ("Digite um numero maior que 2: ");
      scanf("%d", &num);

      if (num <=2)
      {
          printf ("Valor invalido");
      }
    }while (num<=2);

    //responsavl por imprimir pares do intervalo
    for (i=2; i<=num; i++)
    {
        cont++;
        if (i%2==0)
        {
            printf ("%d\t  \n", i);
            soma1=soma1 +i;
        }
        if (i%2==1)
        {
            soma2 =soma2 +i;
        }
        if (i%2==1 && i%9==0)
        {
            produto = produto*i;
        }
    }
    soma = soma1+soma2;
    media = (float)soma/cont;

   printf ("Soma dos pares do intervalo: %d\n", soma1);
   printf ("Produto dos impares divisiveis por 9: %d\n", produto);
   printf ("Media eh: %.2f\n", media);
    return 0;
}
