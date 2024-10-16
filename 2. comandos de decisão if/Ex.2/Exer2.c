#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int valor1;

    printf("Digite um número na faixa entre 0 - 9: ");
    scanf("%d", &valor1);

    if(valor1 >= 0 && valor1 <= 9)
    {
        printf("\nO valor digitado se encontra na faixa!\n");
    }
    else
    {
        printf("\nO valor digitado NÃO se encontra na faixa! SEU BURRO!!!\n");
    }

    return 0;
}