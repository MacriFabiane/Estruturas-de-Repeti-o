/*Ler um n�mero positivo, validar a entrada repetindo a leitura at� que seja informado um n�mero que atende essa condi��o. Esse
n�mero representa a quantidade de n�meros �mpares a serem mostrados. Apresentar esses valores n por linha, sendo n um n�mero maior
que zero, informado pelo usu�rio. Os valores s�o apresentados separados por tabula��o. Fazer a m�dia dos n�meros �mpares mostrados.*/
#include<stdio.h>
int main (void)
{
    int num, quant, contImpar, j, soma;
    float media;
    char ch;
    do{
            contImpar=0;
            soma=0;
            media;
    do
    {
        printf ("Informe um numero positivo:  " );
        scanf ("%d",& num);
        printf ("Informe a quantidade de numeros por linha:  ");
        scanf ("%d", &quant);
        if (num<0)
        {
            printf("POSITIVO!\n");
            printf ("Informe um numero positivo:  " );
            scanf ("%d",& num);
            printf ("Informe a quantidade de numeros por linha:  ");
            scanf ("%d", &quant);

        }

    }while (num<0 || quant<0);
    do
        {
            contImpar=0;
            for (j=1; contImpar<num; j++)
        {

            if (j%2==1)
                {
                    printf ("%d\t", j);
                    contImpar++;
                    soma=soma+j;
                }
            if (contImpar%quant==0)
            {
                printf ("\n");
            }
        }
        }while (contImpar<num);

        media= soma/contImpar;
        printf ("\nMedia dos numeros impares: %.2f\n", media);

        printf ("Deseja repetir o programa? (s/n) ");
        setbuf (stdin, NULL);
        scanf ("%c", & ch);
    }while (ch == 'S' || ch == 's');

}
