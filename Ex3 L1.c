//Ler dois números que representam os limites de um intervalo e ler o incremento. Mostrar os números desse
//intervalo de acordo com o incremento indicado e em ordem crescente. O usuário pode informar os valores
//que representam os limites do intervalo em ordem crescente ou decrescente. Fazer a média dos ímpares e
//divisíveis por 35 do intervalo.
#include<stdio.h>

int main (void)
{
    int num, num1, num2, in, i, cont=0, soma=0;
    float media=0;

    printf("Insira o inicio do intevalo: ");
    scanf("%d", &num1);
    printf("Insira o final do intevalo: ");
    scanf("%d", &num2);
    printf("Insira o incremento do intevalo: ");
    scanf("%d", &in);
      if (num2<num1)
       {
           i= num2;
           num2=num1;
           num1=i;
       }

    for (i=num1; i>=num1 && i<=num2; i=i+in)
    {
        printf("%d \n",i);

        if (i%2==1 && i%35==0)
        {

            soma=soma+i;
            cont++;

        }
    }
    media=(float)soma/cont++;
    printf ("Soma dos impares divisiveis por 35: %d\n", soma);
    printf ("Media dos impares divisiveis por 35: %.2f\n", media);
    printf ("Inicio do intervalo %d\n", num1);
    printf ("Final do intervalo %d\n", num2);
return 0;
}
