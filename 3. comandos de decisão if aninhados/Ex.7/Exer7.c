#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    float lado1, lado2, lado3;

    printf("Vamos Identificar o seu triangulo!\n");

    printf("Digite aqui todos os lados do seu triangulo: ");
    scanf("%f" "%f" "%f", &lado1, &lado2, &lado3);

    if(lado1 == lado2 && lado2 == lado3)
    {
        printf("\nO seu triangulo é equilátero, pois todos os lados são iguais.\n");
    }
    else
    {
        if(lado1 == lado2 && lado2 != lado3)
        {
            printf("\nO seu tringulo é isósceles, pois possui apenas dois lados da mesma medida.\n");
        }
        if(lado2 == lado3 && lado3 != lado1)
        {
            printf("\nO seu tringulo é isósceles, pois possui apenas dois lados da mesma medida.\n");
        }
        if(lado1 != lado2 && lado2 != lado3)
        {
            printf("\nO seu tringulo é escaleno, pois possui as medidas dos três lados diferentes.\n");
        }
    }
}