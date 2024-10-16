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
	
    int valor;

    printf("Usuário digite um número: ");
    scanf("%d", &valor);

    if(valor > 0)
    {
        printf("\nO número é positivo!\n");
    }
    else
    {
        if(valor == 0)
        {
            printf("\nO número é neutro!\n");
        }
        else
        {
            printf("\nO número é negativo!\n");
        }
    }

    return 0;
}