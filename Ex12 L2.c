//Faça o programa que apresente a seguinte saída como no exemplo, perguntando ao usuário o número máximo (deve ser positivo).
# include <stdio.h>
int main (void)
{
    int num, i ,m;
    char res;

    do
    {
    do
    {
        printf ("Insira um numero positivo: ");
        scanf("%d", &num);

    }while (num<=0);

    for (i=1; i<=num; i++)
    {
        for (m=1; m<=i; m++)
        {
            if (m!=i)
            {
                printf("%d\t", m);
            }
            else
            {
                printf ("%d\n", m);
            }
        }
    }

        printf ("Deseja digitar outro numero? (responda S para sim e N para nao): ");
        setbuf(stdin, NULL);
        scanf ("%c", &res);
    }while(res=='s'||res=='S' );

}
