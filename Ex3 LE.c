/*Apresentar os números primos entre dois valores, que representam os limites inferior e superior, respectivamente, de um intervalo,
informados pelo usuário. Apresentá-los com n números por linha. n é informado pelo usuário. Validar n para que seja maior que 0.
Validar o limite inferior para seja maior que 1 e o limite superior para que seja maior ou igual ao limite inferior. Implementar a repetição de programa*/
#include<stdio.h>
int main (void)
{
    int limIn, limSp, N, contDiv, j, i, contPrimos=0;
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
        printf ("Digite a quantidade de numeros primos por linha: ");
        scanf ("%d", & N);


    }while (limIn<0 || limSp<0 || N<=0);

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
        if (contPrimos%N==0)
        {
            printf ("\n");
        }

      }
    }while (i<limSp);

    printf ("\nQuer repetir o programa ? ");
    setbuf(stdin, NULL);
    scanf ("%c", &ch);
}while (ch =='S' || ch=='s');

    return 0;
}

