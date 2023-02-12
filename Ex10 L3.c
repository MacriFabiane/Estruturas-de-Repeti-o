/*Ler dois números que representam os limites de um intervalo. Validar a entrada, o usuário deverá fornecer valores positivos.
Mostrar o intervalo em ordem crescente.a) Mostrar os números primos desse intervalo, com cinco números por linha.
b) Calcular a média dos múltiplos de 3 e de 7 desse intervalo. Validar para que não seja realizada uma divisão por zero.*/
#include<stdio.h>
int main (void)
{
    int limIn, limSp, i,j,contDiv, contPrimos=0, cont37=0, soma=0;
    float media=0;
    char ch;
do{
    do
    {
        printf ("Informe o limite inferior do intervalo: ");
        scanf ("%d", &limIn);
        printf ("Infome o limite superior do intervalo: ");
        scanf ("%d", &limSp);
        if (limIn>limSp)
        {
            limSp=limIn;
            limIn=limSp;
        }

    }while (limIn<0 || limSp<0);

    do
    {
      for (i=limIn; i<=limSp; i++)
      {

            contDiv=0;
            for (j=1; j<=i; j++)
           {

            if (i%j == 0)
                {
                    contDiv++;
                }

            }
        if (contDiv==2)
        {
            printf ("%d\t", i);
            contPrimos++;

        }
        if (i%3==0 && i%7==0)
        {
            cont37++;
            soma=soma+i;
        }
        if (contPrimos%5==0)
        {
            printf ("\n");
        }

      }
    }while (i<limSp);

    media= (float)soma/cont37;
    printf ("\nMedia dos multiplos de 3 e 7: %.2f", media);

    printf ("Quer repeir o programa ? ");
    setbuf(stdin, NULL);
    scanf ("%c", &ch);
}while (ch =='S' || ch=='s');

    return 0;
}
