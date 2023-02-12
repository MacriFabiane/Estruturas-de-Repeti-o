// Ler um número e ler um dígito. Contar quantos dígitos o número possui.
#include<stdio.h>
int main (void)
{
    int digito, num, x, contD, j;
    char ch;

    do{
       printf ("Informe um digito: ");
       scanf ("%d", & digito);
    do
    {
       contD=0;
       printf ("\n\nInforme um numero: ");
       scanf ("%d", & num);
        if (num==0)
       {
           break;
       }

       j=num;
       do{

         if (j%10==digito)
       {
            contD++;
       }
       j=j/10;
       } while (j%10>0);
       printf ("O numero tem %d digitos %d\n", contD, digito );
       j=0;


    }while (num>0);
    printf ("Deseja repetir o processo?");
    setbuf(stdin, NULL);
    scanf ("%c", &ch);

    }while (ch =='S' || ch=='s');

    return 0;
}
