#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main()
{	
    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("Os números entre 1 a 1000 em ordem inversa são: ");

    for(int i = 1000; i >= 1; i--)
    printf("%d ", i);
}