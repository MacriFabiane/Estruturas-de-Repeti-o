//Apresentar os n primeiros números pares e divisíveis por 3 informados pelo usuário (validar para que n
//seja diferente de 0). Se o usuário informar um número negativo transformá-lo em positivo (sem usar funções prontas) antes de utilizar.
#include<stdio.h>
int main (void)
{
    int num, cont, i;
    char ch;

    do
    {
            cont=0;
            printf ("Quantos numeros pares e divisiveis por 3 quer mostrar? ");
            scanf ("%d", & num);
            if (num<0)
            {
               num= -num;
            }
            do{
            for (i=0; cont<(unsigned)num; i=i+2)
            {
                if (i%2==0 && i%3==0)
                {
                    cont++;
                    printf ("%d\t", i);
                }
            }
            }while (cont<(unsigned)num);

        printf ("\nDeseja repetir o programa? (s/n)");
        setbuf (stdin, NULL);
        scanf ("%c", & ch);
    }while (ch =='S'||ch=='s');
    return 0;
}
