//Apresentar os n�meros divis�veis por 4 ou m�ltiplos de 10 entre 500 e 0 e a m�dia desses m�ltiplo
#include <stdio.h>
int main (void)
{
    int i=500, cont=0, soma=0;
    float media=0;

    for (i<= 500; i >0; i--)
    {
        if (i%4==0 || i%10==0)
        {
            cont++;
            printf ("%d\t", i);
            soma=soma+i;
        }
    }
    media = (float)soma/cont++;
    printf ("media = %.2f", media);

    return 0;
}
