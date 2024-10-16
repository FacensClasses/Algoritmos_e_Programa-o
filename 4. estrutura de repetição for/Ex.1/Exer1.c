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

    printf("Usuário digite dez valores para mostrar seu dobro: ");
    
    for(i = 1; i <= 10; i++)
    {
        scanf("%d", &valor);

        printf("\nO dobro de %d é %d!\n", valor, valor*2);
    }
    
    return 0;
}