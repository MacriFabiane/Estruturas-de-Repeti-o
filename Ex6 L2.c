/*6) Ler n�meros inteiros. Prosseguir a leitura at� ser informado o valor zero que n�o deve ser considerado nos c�lculos. Informar:
a) Quantos valores positivos foram informados.b) Quantos valores negativos e pares foram informados. Exemplo: Se a entrad
 for -1, -2, -3, dever� retornar 1, pois tem apenas um n�mero negativo que � par.
c) A m�dia dos valores divis�veis por 3 informados. Usar a func�o fabs() para converter os valores negativos em positivos. Validar
para n�o fazer divis�o por zero no c�lculo da m�dia.*/
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

