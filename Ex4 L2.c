//Ler caracteres e parar quando o usu�rio informar o caractere '0'. Utilizando a tabela ASCII contar quantos caracteres s�o letras
//mai�sculas, quantos s�o letras min�sculas e quantos caracteres n�o s�o letras.
#include<stdio.h>
int main (void)
{
    int contM=0, contm=0, cont=0;
    char ch;
    do
    {
        printf ("Informe um caractere: ");
        scanf ("%c", &ch);
        setbuf (stdin, NULL);
        if (ch>=65 &&ch<=90)
        {
            contM++;
        }
        else if  (ch>=97 && ch<=122)
        {
            contm++;
        }
        else
        {
            cont++;
        }
    }while(ch!=48);
    printf ("Foram digitadas %d letras minusculas.\n ", contm);
    printf ("Foram digitadas %d letras maiusculas.\n ", contM);
    printf ("Foram digitados %d caracteres.\n ", cont-1);

    return 0;
}
