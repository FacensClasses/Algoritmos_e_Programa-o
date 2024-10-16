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

    printf("Usuário digite um valor: ");
    scanf("%d", &valor1);

    if(valor1 > 0)
    {
        printf("\nO número digitado é positivo!\n");
    }
    else
    {
        if(valor1 == 0)
        {
            printf("\nO valor digitado é neutro!\n");
        }
        else
        {
            printf("\nO número digitado é negativo!\n");
        }
    }
    
    return 0;
}
