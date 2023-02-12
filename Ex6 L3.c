/*O Triângulo de Floyd é um triângulo formado com números naturais. O triângulo começa em 1 no canto superior esquerdo e continua a
escrever a sequência de números naturais de tal modo que cada linha contém um número a mais do que a linha anterior. Escreva um
programa que leia um número inteiro positivo n e em seguida imprima n linhas do Triângulo de Floyd.*/
#include <stdio.h>

int main() {
   int num,i,j,k = 1;

  do
    {
        printf ("Insira um numero positivo: ");
        scanf ("%d", & num);

    }while(num<0);

   for(i = 1; i <= num; i++)
    { //vai controlar a linha
      for(j = 1;j <= i; j++)
      {
          // vai  controlar a quant de  numeros por linha
          k++;
          printf("%d\t", k); // numeros em si

      }

      printf("\n");
   }

   return 0;
}
