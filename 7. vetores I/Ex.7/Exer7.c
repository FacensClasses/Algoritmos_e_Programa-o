#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

main() 
{
    int indice = 0, numerosPares[50];
    
    for (int i = 2; i < 100; i += 2) {
        numerosPares[indice] = i;
        indice++;
    }
    
    printf("Números pares entre 1 e 100: ");
    for (int i = 0; i < 49; i++) 
    {
        printf("%d ", numerosPares[i]);
    }
}