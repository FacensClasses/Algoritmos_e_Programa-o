#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

main()
{
    int alunos, disciplinas;
    float nota_final, media_semestre, AC1, AC2, AG, AF, notas;

    printf("Bem-vindos(as) alunos(as) do 3 semestre!\n");
    printf("\n");
    system("pause");

    printf("\nDigite a quantidade de alunos cursando o 3 semestre: ");
    scanf("%d", &alunos);

    printf("\nAgora vamos calcular a nota das disciplinas do 2 semestre!\n");

    for(int i = 0; i < alunos; i++)
    {
        printf("\n%d aluno digite a quantidade de disciplinas que voce cursou no 2 semestre: ", i+1);
        scanf("%d", &disciplinas);

        notas = 0;

        for(int l = 0; l < disciplinas; l++)
        {
            printf("\n%d aluno, digite a sua nota da AC1 de sua %d disciplina: ", i+1, l+1);
            scanf("%f", &AC1);

            printf("\n%d aluno, digite a sua nota da AC2 de sua %d disciplina: ", i+1, l+1);
            scanf("%f", &AC2);

            printf("\n%d aluno, digite a sua nota da AG de sua %d disciplina: ", i+1, l+1);
            scanf("%f", &AG);
            
            printf("\n%d aluno, digite a sua nota da AF de sua %d disciplina: ", i+1, l+1);
            scanf("%f", &AF);

            nota_final = (AC1 * 0.15) + (AC2 * 0.30) + (AG * 0.10) + (AF * 0.45);

            printf("\n\n\n");
            printf("---------------------");
            printf("RESULTADOS FINAIS ABAIXO!");
            printf("---------------------");
            printf("\n\n\n");

            printf("\nA nota da %d disciplina \x82: %.2f.\n", l+1, nota_final);

            notas += nota_final;
        }
        
        media_semestre = notas / disciplinas;

        printf("\nA soma de todas as disciplinas \x82: %.2f.\n", notas);

        printf("\n%d aluno, sua media neste semestre \x82: %.2f.", i+1, media_semestre);
    }
}