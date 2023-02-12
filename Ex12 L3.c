/*Ler a quantidade e o respectivo valor de produtos. Parar a leitura quando informado valor 0 ou negativo para a quantidade. Ler o
valor somente se informada quantidade válida. O valor deve ser validado para que seja positivo*/
#include<stdio.h>
int main (void)
{
    int quant, nota100, nota50, nota20, nota10, nota5, nota2, nota1, contquant=0;
    float valor, soma=0, media=0, cent;
    char ch;

    do{
        soma=0;
        contquant=0;
        media=0;
    do
    {

        printf("Informe a quantidade de um prouto: ");
        scanf ("%d", &quant);
        contquant++;
        if (quant<=0)
        {
            break;
        }
        printf ("Informe o valor do produto: ");
        scanf ("%f", &valor);
        soma=soma+(quant*valor);
        media= soma/contquant;

    }while (quant>0);
    printf ("Valor TOTAL da compra: %.2f\n", soma);
    printf ("Valor MEDIO da compra: %.2f\n\n", media);

    nota100=(int)soma/100;
    nota50=(int)soma%100/50;
    nota20=(int)soma%100%50/20;
    nota10=(int)soma%100%50%20/10;
    nota5=(int)soma%100%50%20%10/5;
    nota2=(int)soma%100%50%20%10%5/2;
    nota1=(int)soma%100%50%20%10%5%2/1;
    cent=soma-(nota100*100+nota50*50+nota20*20+nota10*10+nota5*5+nota2*2+nota1);

    printf ("Total da compra %d reais e %.2f centavos\n\n",(int)soma, cent);

    printf ("%d equivale a: \n", (int)soma);
    printf ("%d notas de 100\n", nota100);
    printf ("%d notas de 50\n", nota50);
    printf ("%d notas de 20\n", nota20);
    printf ("%d notas de 10\n", nota10);
    printf ("%d notas de 5\n", nota5);
    printf ("%d notas de 2\n", nota2);
    printf ("%d moedas de 1\n", nota1);

    printf ("Deseja repetir o programa?");
    setbuf(stdin, NULL);
    scanf ("%c", & ch);
    }while (ch =='S' || ch=='s');
    return 0;

}
