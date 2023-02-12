/*Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um número que atende essa condição. Esse
número representa a quantidade de números ímpares a serem mostrados. Apresentar esses valores n por linha, sendo n um número maior
que zero, informado pelo usuário. Os valores são apresentados separados por tabulação. Fazer a média dos números ímpares mostrados.*/
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
