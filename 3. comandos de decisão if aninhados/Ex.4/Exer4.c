#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int valor, valor2, valor3;


        printf("\nDigite três valores: ");
        scanf("%d %d %d", &valor, &valor2, &valor3);

        if(valor == valor2 && valor2 == valor3)
        {
            printf("\nTodos os valores são iguais!\n");
        }
        else
        {
            if(valor != valor2 && valor != valor3 && valor2 != valor3)
            {
                printf("\nTodos os valores são diferentes!\n");
            }
            if(valor == valor2 && valor != valor3)
            {
                printf("\nOs valores %d e %d são iguais! Apenas %d é diferente.\n", valor, valor2, valor3);
            }
            if(valor2 == valor3 && valor2 != valor)
            {
                printf("\nOs valores %d e %d são iguais! Apenas %d é diferente.\n", valor2, valor3, valor);
            }
        }
	
    return 0;
}