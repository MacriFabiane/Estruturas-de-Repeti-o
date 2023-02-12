/*Construa um programa que leia um conjunto de dados contendo altura (que deve ser maior que 0) e sexo
(que deve ser masculino ou feminino) de um grupo de pessoas. Quando fornecida uma altura igual a 0, é
encerrada a entrada de dados.*/
#include<stdio.h>
#include <ctype.h>
int main (void)
{
    int contalt=0, contsex=0, contM=0, contH=0;
    float alt, soma=0, media=0, maior=-99999, menor=99999, M, H, media2=0, soma2=0;
    char sex, ch;
do{
    do
    {
        printf ("Insira a altura: ");
        scanf ("%f",& alt);
        contalt++;
        if (alt>maior)
        {
            maior=alt;
        }
        if (alt<menor && alt !=0)
        {
            menor=alt;
        }

        if (alt<=0)
        {
            break;
        }

        printf ("Informe o sexo: ");
        setbuf(stdin, NULL);
        scanf ("%c", &sex);
        contsex++;
         if (sex=='F' || sex=='f')
            {
                contM++;
                M=alt;
                soma=soma+M;
            }
        if (sex=='M' || sex=='m')
            {
                contH++;
                H=alt;
                soma2=soma2+H;
            }


    }while (alt>0 || (sex =='F' || sex =='f')||(sex =='m'|| sex == 'M'));
    printf ("\n\nMaior altura do grupo: %.2f\n", maior);
    printf ("Menor altura do grupo: %.2f\n\n", menor);

    printf ("===MULHERES===\n");
    printf ("Quantidade: %d\n", contM);
    printf ("Percentual: %d%%\n", contM*100/contsex);
    media= soma/contM;
    printf ("Media de altura: %.2f\n", media);


    printf ("\n===HOMENS===\n");
    printf ("Qunatidade: %d\n", contH);
    printf ("Percentual: %d%%\n", contH*100/contsex);
    media2= soma2/contH;
    printf ("Media de altura: %.2f\n\n", media2);

    printf ("Deseja repetir o programa? (s/n)");
    setbuf (stdin, NULL);
    scanf ("%c", & ch);

}while (ch =='S' || ch =='s');

return 0;
}
