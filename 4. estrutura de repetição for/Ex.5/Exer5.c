#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main()
{	
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    printf("Os números pares entre 10 e 80 são: ");
    
    for(int i = 10 + 1; i < 80; i++)
    {
        if(i % 2 == 0)
        printf("%d ", i);
    }

    return 0;
}