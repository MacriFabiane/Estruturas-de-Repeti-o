/*Elaborar um programa para automatizar o caixa de uma loja. Ler a quantidade e o valor unitário de cada produto. Calcular o valor
total da compra. Informar esse valor para o usuário e o usuário informa o valor para pagamento. O programa calcula o troco e
informa-o ao usuário em notas de 10, 5, 1 e os centavos. Prosseguir a leitura enquanto a quantidade for maior que zero. Se
informado zero ou valor negativo para a quantidade, não ler o valor unitário.*/
#include <stdio.h>
int main (void)
{
    int i,cont=0, nota10=0, nota5=0, nota1=0;
    float valU, total=0, mult=1, pago, troco=0, cent=0;


    do{
        cont++;
        printf ("Informe a quantidade do produto: ");
        scanf ("%d", & i);
        if (i<0)
        {
          printf ("Digite um valor positivo.\n");
          printf ("Informe a quantidade do produto: ");
          scanf ("%d", & i);
        }
        else if (i==0)
        {
            break;
        }
        printf ("Informe o valor unitario do produto: ");
        scanf ("%f", &valU);
        mult = i * valU;
        total = total + mult;

    }while (i>0 && i!=0);


    printf ("Total a ser pago: R$ %.2f \n", total);

    printf ("Valor pago pelo cliente:R$ ");
    scanf ("%f", &pago);
    troco=pago-total;
    printf (" TROCO: R$ %.2f\n", troco);

    nota10=(int)troco%100%50/10;
    nota5=(int)troco%100%50%10/5;
    nota1=(int)troco%100%50%10%5/1;

    printf(" O valor do troco sera devolvido com: \n");
    printf(" Notas de R$  10,00: %d\n ", nota10);
    printf("Notas de R$   5,00: %d\n ", nota5);
    printf("Notas de R$   1,00: %d\n ", nota1);
    printf("Centavos R$: %.2f\n ", cent=troco-(nota10*10)-(nota5*5)-nota1);

    return 0;
}
