//5) Ler um n�mero que indica a quantidade de �mpares iniciando em 1 que deve ser mostrada. O valor
//informado para a quantidade deve ser maior que 0. Validar a entrada
#include<stdio.h>
int main (void)
{
    int i=1, quant, contIm=0;

    do
    {
    printf ("Quantos numeros �pares deseja imprimir na tela? ");
    scanf ("%d", &quant);

    if (quant<=0)
    {
        printf ("Valor inv�ido\n");
    }
    }while(quant<=0);

    do{
    printf ("Numeros impares: %d\n", i);
    contIm++;
    i = i+2;

    }while(contIm<quant);



    return 0;
}
