/*Elaborar um programa que valide o número de uma conta corrente com três dígitos, retorne o dígito verificador e informe se o
número da conta está correto. Ler os quatro dígitos como um único número, validando para que esse número esteja em um intervalo de
1000 a 9999. Separar os dígitos de forma que os três primeiros sejam o número da conta e o último o dígito verificador.*/
#include<stdio.h>
int main (void)
{
    int num, dig1=0,dig2=0,dig3=0, dig4=0,conta=0, inv=0,soma=0,dig11=0, dig22=0, dig33=0, dig44=0,x=0,digV=0;
    do
    {
        printf ("Informe o numero da conta: ");
        scanf ("%d", &num);
    }while (num<1000 && num>9999);

    dig1=num/1000;
    dig2=num%1000/100;
    dig3=num%1000%100/10;
    dig4=num%1000%100%10/1;

     printf ("Digito 1: %d\n", dig1);
     printf ("Digito 2: %d\n", dig2);
     printf ("Digito 3: %d\n", dig3);
     printf ("Digito 4: %d\n\n", dig4);

    conta=dig1*100+(dig2*10)+dig3;
    inv=dig3*100+(dig2*10)+dig1;

    printf ("CONTA: %d\n", conta);
    printf ("Inverso %d\n", inv);
    soma=inv+conta;

    dig11=soma%1000/100;
    dig22=soma%1000%100/10;
    dig33=soma%1000%100%10/1;

     printf ("Digito 1: %d\n", dig11);
     printf ("Digito 2: %d\n", dig22);
     printf ("Digito 3: %d\n\n", dig33);


    x=dig1*dig11+(dig2*dig22)+(dig3*dig33);

    printf ("X=%d\n\n", x);
    digV=x%1000%100%10/1;

    printf ("Digito verificador: %d\n", digV);

    if (digV==dig4)
    {
      printf ("Digito verificador correto!\n");
    }
    else
    {
        printf ("Digito verificador incorreto, tente novamente!\n");
    }

    return 0;
}
