//) Uma �rvore A tem 1,50 metros e cresce 2 cent�metros por ano, enquanto uma �rvore B tem 1,10 metros e cresce 3 cent�metros
//por ano. Construa um programa que calcule e imprima quantos anos ser�o necess�rios para que a �rvore B seja maior que a
//�rvore A
#include<stdio.h>
int main (void)

{
   int cont=0, contf=0,i=0, j=0;
   float A=1.50, B=1.10;

   printf ("Arvore A=1.50m\n");
   printf ("Arvore B=1.10m\n");


   do
   {
       cont++;
       A=A+0.02;
       B=B+0.03;


   }while(A>=B);
   if (B>A);
   {
       printf ("Altura final da Arvore A = %.2f\nAltura final da Arvore B = %.2f\n", A, B);
      printf ("Serao necessarios %d anos para B ser maior que A\n", cont);
   }
   return 0;
}
