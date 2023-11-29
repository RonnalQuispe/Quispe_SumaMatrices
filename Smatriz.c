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
    for (i = 0; i < fila; i++)
    {
        for (j = 0; j < columna; j++)
        {
            matrizA[i][j] = rand() % 101;
            matrizB[i][j] = rand() % 101;
        }
    }
    printf("\n");
    printf("La MATRIZ  1 es:\n");
    for (i = 0; i < fila; i++)
    {
        for (j = 0; j < columna; j++)
        {
            printf("%d ", matrizA[i][j]);
        }
       

    return 0;
}
