#include<stdio.h>
int main (void)
{
int primo=0;
int a = 0;
int b = 1;
int tem_primo = 0;
printf("Digite o numero a:\n");
scanf("%d",&a);
if (a>=0 && a<=100){
    printf("Numero a esta entre 0 e 100\n",a);
}else{
    printf("Nao esta entre 0 e 100, digite novamente:\n", a);
    while(a>100){
        printf("Numero ivalido, digite novamente: \n");
        scanf("%d", &a);

    }
}
printf("Digite o numero b:\n");
scanf("%d",&b);
if (b>=0 && b<=100){
    printf("Numero b esta entre 0 e 100\n",b);

}else{
    printf("Nao estao entre 0 e 100, digite novamente:\n",b);
    while(b>100){
        printf("Numero invalido, digite novamente: \n");
        scanf("%d",&b);
    }
}

printf("Numeros primos::.\n");

for(int i = 2; i<=num1; i++)
{

    //Inicia o verificador sempre como zero
    primo=0;

    for (int x = 1; x <=i; x++)
    {

        if(i % x == 0)
        {
            primo++;
        }

    }
    if(primo==2)
    {

        //Mostra na tela os numeros primos um a um
        printf("%d; ", i);
        tem_primo = 1;
    }
}

}
