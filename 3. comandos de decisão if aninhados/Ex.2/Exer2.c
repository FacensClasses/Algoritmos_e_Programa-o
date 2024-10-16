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
	
    int valor, extremidade1, extremidade2;

    printf("Usuário, digite o intervalo entre dois valores: ");
    scanf("%d %d", &extremidade1, &extremidade2);

        if(extremidade1 >= extremidade2)
        {
            printf("Erro: o valor inicial deve ser menor que o valor final do intervalo.\n");
            return 1;
        }

        printf("\nAgora digite um número qualquer: ");
        scanf("%d", &valor);

        if(valor > extremidade1 && valor < extremidade2)
        {
            printf("\nO número escolhido está entre o intervalo!\n");
        }
        else if(valor < extremidade1 || valor > extremidade2)
        {
            printf("\nO número escolhido está fora do intervalo!\n");
        }
        else
        {
            printf("\nO valor está em uma das extremidades!\n-");
        }
    
    return 0;
}