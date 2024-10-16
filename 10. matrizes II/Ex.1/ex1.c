#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x[4][4], y[4][4], z[4][4], a, b, cont = 0;

    for(a = 0; a < 4; a++)
    {
        for(b = 0; b < 4; b++)
        {
            printf("Usuário, digite o %d valor da %d linha e %d coluna: ",  cont+1, a+1, b+1);
            scanf("%d", &x[a][b]);
            cont++;
        }
        printf("\n");
    }

    printf("Agora a segunda matriz!\n\n");

    cont = 0;
    for(a = 0; a < 4; a++)
    {
        for(b = 0; b < 4; b++)
        {
            printf("Usuário, digite o %d valor da %d linha e %d coluna: ",  cont+1, a+1, b+1);
            scanf("%d", &y[a][b]);
            cont++;
        }
        printf("\n");
    }

    for(a = 0; a < 4; a++)
    {
        for(b = 0; b < 4; b++)
        {
            if(x[a][b] < y[a][b])
            {
                z[a][b] = y[a][b];
            }
            else
            {
                z[a][b] = x[a][b];
            }
        }
    }

    printf("Nova matriz:\n");

    for(a = 0; a < 4; a++)
    {
        for(b = 0; b < 4; b++)
        {
            printf("%d ", z[a][b]);
        }
        printf("\n");
    }

    return 0;
}