#include<stdio.h>

int main()
{
    int i=2;
    int b=2;
    int c=0;
    int cont=0;
    char q;

    while(i<1000)
    {
        while(b<i)
        {
            if(i % b == 0)
            {
                c=1;
                break;
            }
            b=b+1;
        }

        b=2;

        if(c==0)
        {
            if (cont%10 == 0)
                printf ("\n");
            printf("%3d  ", i);
            cont++;
        }

        c=0;

        i++;
    }
}
