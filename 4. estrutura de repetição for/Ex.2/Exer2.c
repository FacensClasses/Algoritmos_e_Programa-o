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

    printf("Bem-vindo a calculadora formadora de tabuadas!\n");

    printf("\nUsuário digite um número: ");
    scanf("%d", &valor);
    
    for(i = 1; i <= 10; i++)
    {
        printf("\n%d x %d = %d.\n", valor, i, valor*i);
    }

    return 0;
}