#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main()
{	
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    int valor, i;

    printf("Usuário digite dez valores para determinar quais são os negativos, nulos e positivos entre eles: ");
    
    for(i = 1; i <= 10; i++)
    {
        scanf("%d", &valor);

        if(valor > 0)
        {
            printf("\nO valor informado é positivo: %d.\n", valor);
        }
        else
        {
            if(valor < 0)
            {
                printf("\nO valor informado é negativo: %d.\n", valor);
            }
            else
            {
                printf("\nO valor é nulo: %d.\n", valor);
            }
        }
    }
    
    return 0;
}