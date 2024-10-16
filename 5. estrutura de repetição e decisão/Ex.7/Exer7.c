#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <string.h>
#include <locale.h>

/*
Para compreender melhor este codigo é só entender que uma variavel é responsavel pelas linhas
e a outra pela quantidade de *. 

Outro ponto a se observar é que um depende do outro, porque a quantidade linha é a quantidade 
gerade de *.

(O PRIMEIRO FOR É VAZIO, ELE É LITERAMENTE A LINHA!)
(O SEGUNDO FOR ELE SÓ É O * E SUAS QUANTIDADES!)
*/

main()
{

    for(int x = 0; x < 5; x++)
    {
        for(int y = 0; y <= x; y++)
        {
            printf("*");
        }
        printf("\n");
    }
}