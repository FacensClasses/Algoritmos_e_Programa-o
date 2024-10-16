#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int valores, somapositiva = 0, somanegativa = 0;
    float valor, mediaposi, medianega;

    printf("Bem-vindo ao calculo aritmetico automatico!\n");
    printf("\n");
    system("pause");

    printf("\nCom quantos valores vamos trabalhar?\n");
    printf("\nSua resposta: ");
    scanf("%d", &valores);

    for(int i = 0; i < valores; i++)
    {
        printf("\nDigite o valor %d valor: ", i+1);
        scanf("%f", &valor);

        if(valor > 0)
        {
            somapositiva += valor;
        }
        else
        {
            somanegativa += valor;
        }
    }

    mediaposi = somapositiva / valores;
    medianega = somanegativa / valores;

    printf("\nA media aritmetica dos valores positivos é: %.2f.\n", mediaposi);
    printf("\nA media aritmetica dos valores negativos é: %.2f.\n", medianega);

    return 0;
}