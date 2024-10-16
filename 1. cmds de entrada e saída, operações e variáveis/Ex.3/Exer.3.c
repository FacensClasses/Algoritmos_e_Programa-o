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

    float metros, centimetros;

    printf("Digite um valor em m para converter em cm: ");
    scanf("%f", &metros);

    centimetros = metros * 100;

    printf("\nO valor da conversão é: %.2fcm", centimetros);

    return 0;
}