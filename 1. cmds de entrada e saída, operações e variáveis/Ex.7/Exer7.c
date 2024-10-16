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

    float heit, celsius;

    printf("Bem vindo a calculadora conversora de temperatura! - (Fahrenheit para Celsius)\n");

    printf("\nDigite uma temperatura em Fahrenheit: ");
    scanf("%f", &heit);

    celsius = (heit - 32) / 1.8;

    printf("\nO valor de %.2f Fahrenheit em Celsius é: %.2f.\n", heit, celsius);

    return 0;
}


