#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int fila, columna;
    int i, j;
    
    printf("ingrese la dimension de la fila:");
    scanf("%d", &fila);
    printf("ingrese la dimension de la columna:");
    scanf("%d", &columna);
    int matrizA[fila][columna];
    int matrizB[fila][columna];
    int suma[fila][columna];
    srand(time(0));
   
    return 0;
}
