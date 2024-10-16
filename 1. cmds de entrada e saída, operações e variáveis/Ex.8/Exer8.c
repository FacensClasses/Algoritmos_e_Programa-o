#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

#define PI 3.14

main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float C, R;

    printf("Bem-vindo a calculadora do perímetro de uma circunferência.\n");
    printf("\n");
    system("pause");

    printf("\nUsuário digite o Raio da circuferência: ");
    scanf("%f", &R);

    C = 2 * PI * R;

    printf("\nO valor do Perímetro da circuferência é: %.2f\n", C);

    return 0;
}