/*_9) Ler números inteiros
informados pelo usuário até ser informado um valor negativo. Dentre os números informados, exceto o
valor negativo que é a condição de saída:a) Contar a quantidade de números menores que 10 ou maiores que 100.
b) Contar a quantidade de números ímpares. c) Contar a quantidade de números divisíveis por 10.d) Contar a quantidade de números entre 10 e 100.
e) Contar quantas vezes é informado o número 30.f) Contar quantas vezes é informado um número diferente de 10, de 20 e de 30.*/
#include<stdio.h>
int main(void)
{
    int i, contA=0, contImp=0, contD10=0, contD=0, cont30=0, cont201030=0;

    do
    {
        printf ("Digite um valor(negativo para sair): ");
        scanf ("%d", &i);

        if ( i>0 && i<=10 || i>=100)
        {
          contA++;
        }
        if (i%3==0)
        {
            contImp++;
        }
        if (i%10==0)
        {
            contD10++;
        }
        if (i>=10 && i<=100)
        {
            contD++;
        }
        if (i==30)
        {
            cont30++;
        }
        if (i!=20 && i!=10 && i!=30)
        {
            cont201030++;
        }

    }while (i>=0);



    printf ("Contar a quantidade de números menores que 10 ou maiores que 100:%d ", contA++);
    printf("\nQuantidade de numeros impares: %d", contImp++);
    printf("\nQuantidade de numeros divisiveis por 10: %d", contD10++);
    printf("\nQuantidade de numeros menores entre 10 e 100: %d", contD++);
    printf("\nQuantidade de vezes que foi informado o numero 30: %d", cont30++);
    printf("\nQuantidade de vezes que foi informado um numero diferente de 10, 20 e 30: %d", cont201030++);

}
