#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int ano;

    printf("Bem-vindo à verificação de anos Bissextos!\n");

    printf("\nUsuário, digite um ano: ");
    scanf("%d", &ano);

    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    {
        printf("\nEsse ano é um ano bissexto!\n");
    }
    else
    {
        printf("\nEsse ano não é bissexto.\n");
    }

    return 0;
}