#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

#define peso_teorica 0.6
#define peso_pratica 0.4

main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float prova_teorica1, prova_teorica2, prova_pratica1, prova_pratica2;
    float media_teorica, media_pratica, reajuste1, reajuste2, nota_final;

    printf("Bem vindo a calculadora de prova da Facens.\n");
    printf("\nATENÇÃO: Digite a nota de sua prova de 0 - 10!\n");
    printf("\n");
    system("pause");

    printf("\nDigite a sua nota da PRIMEIRA prova Teorica e em seguida a SEGUNDA: ");
    scanf("%f %f", &prova_teorica1, &prova_teorica2);

    printf("\nDigite a sua nota da PRIMEIRA prova Pratica e em seguida a SEGUNDA: ");
    scanf("%f %f", &prova_pratica1, &prova_pratica2);

    media_teorica = (prova_teorica1 + prova_teorica2) / 2;
    media_pratica = (prova_pratica1 + prova_pratica2) / 2;

    reajuste1 = media_teorica * peso_teorica;
    reajuste2 = media_pratica * peso_pratica;

    printf("\nNota final de cada parte:\n1.Teorica = %.2f.\n2.Pratica = %.2f.\n", reajuste1, reajuste2);

    nota_final = reajuste1 + reajuste2;

    printf("\nSua nota final neste semestre é: %.2f!\n", nota_final);

    return 0;
}