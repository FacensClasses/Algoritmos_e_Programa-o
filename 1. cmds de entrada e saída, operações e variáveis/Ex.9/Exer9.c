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

    double valor, oitava, raizqua;

    printf("Bem vindo usuário!\n");
    printf("\nEssa calculadora irá calcular qual é a raiz quadrada de um valor e também encontrar a sua oitava potência.\n");
    printf("\n");
    system("pause");

    printf("\nUsuário digite um número: ");
    scanf("%lf", &valor);

    raizqua = sqrt(valor);
    oitava = pow(valor, 8);

    printf("\nA raiz quadrada de %.2lf é: %.2lf.\n", valor, raizqua);
    printf("\nA oitava potência de %.2lf é: %.2lf.\n", valor, oitava);

    return 0;
}