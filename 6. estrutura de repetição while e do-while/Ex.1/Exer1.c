#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

main()
{
    int i = 0;
    
    while (i <= 100)
    {
        if(i % 2 == 0)
        {
        printf("%d ", i);
        }
        i++;
    }
}