/*Fazer um programa que faça o levantamento dos candidatos que se inscreveram para vagas em uma empresa. Considerando que para cada candidato, a empresa tenha obtido as seguintes informações:
- Idade - Nacionalidade (B - Brasileiro ou E - Estrangeiro) - Possui curso superior (S - Sim ou N - Não)
Determinar:
a) A quantidade de brasileiros.b) A quantidade de estrangeiros.c) A idade média dos brasileiros sem curso superior.
d) A menor idade entre os estrangeiros com curso superior.*/
#include<stdio.h>

int main (void)
{
    int id, contbr=0, contEs=0, soma=0, BrSsup=0, menor=999999;
    float media1=0;
    char sup, nac;

    do{
    printf ("Insira a sua idade: ");
    scanf ("%d", &id);
    printf ("Insira sua nacionalidade (B - Brasileiro ou E - Estrangeiro): ");
    setbuf(stdin, NULL);
    scanf ("%c", &nac);
    printf ("Possui curso superior (S - Sim ou N - Nao): ");
    setbuf(stdin, NULL);
    scanf ("%c", &sup);

    if (nac == 'B' || nac== 'b')
    {
        contbr++;
    }
    if (nac == 'E' || nac== 'e')
    {
        contEs++;
    }
    if ((nac == 'B' || nac== 'b') && (sup=='N'|| sup =='n'))
    {
       soma=soma+id;
       BrSsup++;
    }
    if ((nac == 'E' || nac== 'e')&& (id<menor) && (sup=='S'||sup=='s'))
    {
        menor=id;
    }

    }while (id>0);

    if (BrSsup>0)
    {
        media1= (float)soma/BrSsup++;
        printf ("Quantidade de Brasileros: %d\n", contbr++);
    }
    else
    {
        printf ("Nao ha brasileiros sem curso superior\n");
    }
    if (contEs>0)
    {
        printf ("Quantidade de Estrangeiros: %d\n", contEs++);
    }
    else
    {
        printf ("Nao ha estrangeiros\n");
    }

    if ((nac == 'E' || nac== 'e')&& (id<menor) && (sup=='S'||sup=='s'))
    {
        printf ("Menor idade dos Estrangeiros com curso superior: %d\n", menor);
    }
    else{
        printf ("Nao ha estrangeiros com curso superior\n");
    }
    printf ("Media de brasileiros sem curso superior %.2f\n", media1);


    return 0;
}


