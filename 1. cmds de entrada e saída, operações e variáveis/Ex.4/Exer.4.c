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

    int anonasc, idade_anos, dias_de_vida;

    printf("Bem-vindo a calculadora de dias de vida!\n");

    printf("\nUsuário, digite o seu ano de nascimento: ");
    scanf("%d", &anonasc);

    idade_anos = 2024 - anonasc;

    printf("\nSua idade é: %d anos!\n", idade_anos);
    
    dias_de_vida = idade_anos * 365;

    printf("\nAté o momento você tem aproximadamente: %d dias de vida.\n", dias_de_vida);

    return 0;
}
