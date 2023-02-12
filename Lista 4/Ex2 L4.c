/*Faça um programa para mostrar os primos e calcular a quantidade deles para os números compreendidos
entre o valor ‘x’ (informado pelo usuário) e ‘x+10’, inclusive. Validar a entrada, o usuário deverá fornecer um
número positivo.*/
#include<stdio.h>
int main (void)
{
    char ch;
    int i, j,k, num, contDiv, contPrimos;
    do
    {
        do{
        printf ("Informe um numero positivo: ");
        scanf ("%d",& num);
        }while(num<0);

        for (i=num; i<=num+10; i++)
        {
            contPrimos=0;
            printf ("\n%d --> ", i);
            for (k=2; k<=i; k++)
            {
                contDiv=0;
                for (j=2; j<k; j++)
                {
                    if (k%j==0 && k!=1)
                    {
                        contDiv++;
                        break;
                    }
                }
                    if (contDiv==0)
                    {
                        printf ("%d\t", k);
                        contPrimos++;
                    }
            }
           printf ("==> %d primo(s) \n", contPrimos) ;
        }



        printf ("\nDeseja repetir o programa? ");
        setbuf (stdin,NULL);
        scanf ("%c", &ch);

    }while (ch=='S'||ch=='s');
    return 0;
}
