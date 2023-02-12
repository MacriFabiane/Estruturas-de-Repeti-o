/*Uma empresa deseja calcular a deprecia��o de seus bens. Para tanto, desenvolver um programa que obtenha a taxa de deprecia��o
anual para os bens, o valor do bem a ser depreciado e o per�odo em anos.Valor depreciado = valor do bem * (taxa de deprecia��o /
100)Valor do bem depreciado = valor do bem � valor depreciado Considere que a taxa de deprecia��o tem valor fixo de 1.5.*/
#include<stdio.h>
int main (void)
{
    int anos, i;
    float valor, valorDepreciado, depreciacao, soma=0;

    printf ("Informe o valor do bem a ser depreciado: ");
    scanf("%f", & valor);
    printf ("Informe o periodo da depreciacao em anos: ");
    scanf ("%d", &anos);
    printf ("Ano\t  Valor do Bem\t    Depreciacao   Valor Depreciado\n");
    printf ("========================================================\n");

    for (i=1; i<=anos; i++)
    {
      depreciacao = valor *(1.5 / 100);
      valorDepreciado = valor-depreciacao;
      printf ("%d\t\t%.2f\t\t%.2f\t\t%.2f\n", i, valor,depreciacao,valorDepreciado);
      valor=valorDepreciado;
      soma=soma+depreciacao;
    }
    printf ("========================================================\n");
    printf ("Depreciacao acumulada: %.2f", soma);
    return 0;

}
