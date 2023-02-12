/*Ler uma série de números indicados pelo usuário até ser informado o valor zero. Encontrar e mostrar o
maior e o menor dos valores informados pelo usuário. O valor zero indica o final da leitura e não deve ser
considerado.*/

#include<stdio.h>

int main (void)
{
    int num, maior=-99999, menor=99999; //maior e menor como referencias para o codigo, ver quais nums digitados se encaixam

    do
    {
       printf ("Insira um numero positivo (0 para sair): ");
       scanf ("%d", &num);

       if (num>maior)
       {
           maior=num;
       }
       if (num<menor && num!=0) //exclui o 0 porque ele não pode ser o menor, já que eh a saida do loop!
       {
           menor=num;
       }
    }while (num!=0); // tem que ser difernte de 0 para o codigo continuar. O 0 eh a saida!

    printf ("Maior: %d\n", maior);
    printf ("Menor: %d", menor);

    return 0;


}


