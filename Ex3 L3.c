/*Escreva um programa que imprima todas as possibilidades de que no lan�amento de dois dados a soma das faces seja um valor
 informado pelo usu�rio. O usu�rio deve informar um valor v�lido entre 2 a 12. Repetir a leitura at� que o usu�rio informe um valor v�lido.*/
#include <stdio.h>
int main (void)
{
    int num, j, i, contPossib;
    char ch;
do {
        contPossib=0;
        i=1;
        j=1;
    do
    {
        printf ("Informe um numero de 2 a 12:  ");
        scanf ("%d",& num);
        if (num<2 || num>12)
        {
           printf ("Voce informou um valor invalido!\n");
           printf ("Informe um numero de 2 a 12: ");
           scanf ("%d",& num);
        }
    }while (num<2 || num>12);
    for (i=1; i<=6; i++)
    {
        for (j=1; j<=6; j++)
        {
        if (i+j==num)
        {
            printf ("\n%d+%d=%d\n", i, j, num);
            //setbuf (stdin, NULL);
            contPossib++;
        }
        }
    }
    printf ("O numero de possibilidades eh: %d\n", contPossib);

    printf ("Deseja repetir o processo?  ");
    setbuf (stdin, NULL);
    scanf ("%c", &ch);
}while (ch == 'S' || ch == 's');
}
