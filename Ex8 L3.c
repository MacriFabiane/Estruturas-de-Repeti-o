 /*Fazer um programa para mostrar os divisores, calcular a quantidade deles e mostrar essa quantidade para os números compreendidos
 entre o valor ‘x’ (informado pelo usuário) e ‘x+10’, inclusive. Validar a entrada, o usuário deverá fornecer um número positivo
 entre 2 e 100. Ao final, mostrar a maior quantidade de divisores*/
 #include <stdio.h>
 int main (void)
 {
     int num, i, j=1, contj;
     do
     {
         printf ("Informe um numero entre 2 e 100: ");
         scanf ("%d", &num);

     }while (num<2 && num>100);
     do{

     for (i=num; i<=num+10; i++) //vai ser o número a ser testado
     {
         j=1;
         contj=0;
         printf ("%d ==>  ", i);

         for(j=1; j<=i; j++) //testa os divisores
         {
             if(i%j ==0)
             {
                printf ("%d;", j);
                contj++;
             }
         }
         printf (" [%d]divisores\n", contj);
     }
      }while (i<=num+10);

     return 0;

 }
