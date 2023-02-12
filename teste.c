#include <stdio.h>
int main (void)
{
    int num, cont=0, i, b=2, num1=100000, cont1=0, tem_primo=0;
        do
        {
        printf ("Informe a quantidade de numeros primos a serem imprimidos: ");
        scanf ("%d", & num);
           if (num<0)
            {
            printf ("Informe um valor POSITIVO!\n");
            printf ("Informe a quantidade de numeros primos a serem imprimidos: ");
            scanf ("%d", &num);
            }
        }while(num<0);

   for(int i = 2; i<=1000; i++)
{

    //Inicia o verificador sempre como zero
    cont=0;
do{
    for (int x = 1; x <=i; x++)
    {

        if(i % x == 0)
        {
            cont++;
        }

    }
    if(cont==2)
    {
        cont1++;

        //Mostra na tela os numeros primos um a um
        printf("%d; ", i);

    }
 }while (cont1<num);
}

}
