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

    printf("\nUsuário digite três números diferentes entre si: ");
    scanf("%d" "%d" "%d", &valor, &valor2, &valor3);

    if(valor == valor2 || valor2 == valor3 || valor3 == valor)
    {
        printf("\nAlguns ou todos valores estão iguais. ISSO NÃO PODE!\n");
    }
    else
    {
        if(valor > valor2 && valor > valor3)
        {
            printf("\nO primeiro número é o maior!\n");
        }
        if(valor2 > valor && valor2 > valor3)
        {
            printf("\nO segundo número é o maior!\n");
        }
        if(valor3 > valor2 && valor3 > valor)
        {
            printf("\nO terceiro número é o maior!\n");
        }
    }
}