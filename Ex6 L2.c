/*6) Ler números inteiros. Prosseguir a leitura até ser informado o valor zero que não deve ser considerado nos cálculos. Informar:
a) Quantos valores positivos foram informados.b) Quantos valores negativos e pares foram informados. Exemplo: Se a entrad
 for -1, -2, -3, deverá retornar 1, pois tem apenas um número negativo que é par.
c) A média dos valores divisíveis por 3 informados. Usar a funcão fabs() para converter os valores negativos em positivos. Validar
para não fazer divisão por zero no cálculo da média.*/
#include <stdio.h>
#include<math.h>
int main (void)
{
    int contP=0, num, contNp=0,contD3=0, soma=0, media=0;
   do
   {
       printf ("Informe um numero: ");
       scanf ("%d", &num);

       if (num>0)
       {
           contP++;
       }
       if (num<0 && num%2==0)
       {
           contNp++;
       }
       if (num%3==0)
       {
           contD3++;
           soma=soma+ fabs(num);
       }

   }while(num!=0);
   media = soma/contD3++;
   printf ("Quantidade de numeros positivos: %d\n", contP);
   printf ("Quantidade de numeros pares e negativos: %d\n", contNp);
   printf ("Media dos valores divisiveis por 3: %d\n", media);

   return 0;

}

