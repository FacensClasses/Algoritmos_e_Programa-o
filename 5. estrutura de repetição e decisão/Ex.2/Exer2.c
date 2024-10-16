#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main()
{	
    int valores, positivos = 0, negativos = 0;

    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("Usuário digite dez valores: ");

    for(int i = 0; i < 10; i++)
    {

        scanf("%d", &valores);

        if(valores > 0)
        {
            positivos++;
            printf("\nO valor informado é positivo: %d.\n", valores);
        }
        else
        {
            if(valores < 0)
            {
                negativos++;
                printf("\nO valor informado é negativo: %d.\n", valores);
            }
            else
            {
                printf("\nO valor é %d nulo!\n", valores);
            }
        }
    }

    printf("\nQuantidade de números positivos: %d.\n", positivos);
    printf("\nQuantidade de números negativos: %d.", negativos);

    return 0;
}
