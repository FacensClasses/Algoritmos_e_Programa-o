#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main()
{	
    int i;
    float teoria, laboratorio, final;
    
    printf("Sejam muito bem-vindos 30 alunos!\n");
    getch();
    printf("\nVamos comecar a calcular a nota de cada um em Algoritmos e Programacao...\n");
    printf("\n");
    system("pause");

    for(i = 1; i <= 30 ;i++)
    {
        printf("\n%d.º aluno, digite sua nota Teorica: ", i);
        scanf("%f", &teoria);

        printf("\n%d.º aluno, digite sua nota Laboratorial: ", i);
        scanf("%f", &laboratorio);

        final = (teoria * 0.6) + (laboratorio * 0.4);

        printf("\nSua media final e: %.2f!\n", final);

        if(final >= 7)
        {
            printf("\nVoce se saiu muito bem!\n");
        }
        else
        {
            if(final >= 5)
            {
                printf("\nVoce se saiu razoavel!\n");

            }
            if(final < 5)
            {
                printf("\nVoce se saiu mal!\n");
            }
        }
    }

    return 0;
}