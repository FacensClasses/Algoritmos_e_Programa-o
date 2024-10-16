#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

#define pessoas 15

main()
{
    int sexo, homens = 0, feminino = 0;
    float altura, alturamulheres = 0, mediamulheres, maiorpessoahomem = 0, maiorpessoafemi = 0, menorpessoahomem = FLT_MAX, menorpessoamulher = FLT_MAX;

    printf("Bem-vindos(as) ao calculo de altura e sexo!\n");
    printf("\n");
    system("pause");

    for(int i = 0; i < pessoas; i++)
    {
        printf("\n%d pessoa escolha o seu sexo:\n1.Masculino\n2.Feminino\nSua Resposta: ", i+1);
        scanf("%d", &sexo);

        switch (sexo)
        {
            case 1: 
                    printf("\nSeu sexo \x82 masculino!\n");
                    homens++;

                    printf("\n%d pessoa(homem) agora digite a sua altura: ", i+1);
                    scanf("%f", &altura);
                    
                    if(maiorpessoahomem < altura)
                    {
                        maiorpessoahomem = altura;
                    }
                    if(menorpessoahomem > altura)
                    {
                        menorpessoahomem = altura;
                    }
            break;

            case 2: 
                    printf("\nSeu sexo \x82 feminino!\n");
                    feminino++;
                    
                    printf("\n%d pessoa(mulher) agora digite a sua altura: ", i+1);
                    scanf("%f", &altura);
                    alturamulheres += altura;

                    if(maiorpessoafemi < altura)
                    {
                        maiorpessoafemi = altura;
                    }
                    if(menorpessoamulher > altura)
                    {
                        menorpessoamulher = altura;
                    }
            break;
        
            default:
                    printf("Essa opcao nao existe!");
            break;
        }
    }

    printf("\n\n\n");
    printf("---------------------");
    printf("RESULTADOS FINAIS ABAIXO!");
    printf("---------------------");
    printf("\n\n\n");

    if(maiorpessoahomem > maiorpessoafemi)
    {
        printf("\nA maior pessoa \x82 do sexo masculino e tem %.2f de altura.\n", maiorpessoahomem);
    }
    else
    {
        printf("\nA maior pessoa \x82 do sexo feminino e tem %.2f de altura.\n", maiorpessoafemi);
    }

    if(menorpessoahomem > menorpessoamulher)
    {
        printf("\nA menor altura do grupo \x82: %.2f.\n", menorpessoamulher);
    }
    else
    {
        printf("\nA menor altura do grupo \x82: %.2f.\n", menorpessoahomem);
    }
        
    mediamulheres = alturamulheres / feminino;

    printf("\nO numero total de homens \x82: %d.\n", homens);
    printf("\nA media da altura das mulheres \x82: %.2f.", mediamulheres);
}