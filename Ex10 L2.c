/*Um n�mero abundante � aquele cuja soma dos seus divisores (exclu�do o pr�prio n�mero) � maior do que ele mesmo.Escreva um programa
que permita a leitura de um valor a partir do teclado e imprima uma mensagem informando se o n�mero digitado � ou n�o abundante.*/
#include<stdio.h>
int main(void)
{
   int num, cont=1, i=1, soma=0;
        printf ("Digite um numero: ");
        scanf ("%d", & num);
   for(i=1; i<num; i++)
    {

        if (num%i==0)
        {
            printf ("%d\n", i);
            soma=soma+i;
        }

    }
    printf("---------\n");
    printf ("%d\n", soma);

    if (soma>num)
    {
        printf ("Esse numero eh abundante porque a soma dos divisores eh maior que %d\n\n", num);
    }
    else if (soma<=num)
    {
        printf ("Esse numero  nao eh abundante porque a soma dos divisores eh menor que %d\n\n", num);
    }
    return 0;
}
