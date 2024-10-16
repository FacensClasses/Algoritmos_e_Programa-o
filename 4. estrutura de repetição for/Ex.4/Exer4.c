#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main()
{	
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    int valor1, valor2, i;

    printf("Usuário digite dois números inteiros para mostrar todos os valores entre eles: ");
    scanf("%d" "%d", &valor1, &valor2);
    
    if(valor1 < valor2)
    {
        printf("\nOs valores entre %d e %d são: ", valor1, valor2);
        
        for(i = valor1 + 1; i < valor2; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        if(valor1 > valor2)
        {
            printf("\nOs valores entre %d e %d são: ", valor2, valor1);
            
            for(i = valor2 + 1; i < valor1; i++)
            {
                printf("%d ", i);
            }
        }
        else
        {
            printf("\nOs números escolhidos são iguais!\n");
        }
    }

    return 0;
}