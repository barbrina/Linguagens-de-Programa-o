#include "arquivo.h"

int main()
{
    clock_t start, end;
    start = clock();

    Data **matrix = malloc(MAXTAM * sizeof(Data *)); // cria linha

    for (int i = 0; i < MAXTAM; i++)
        matrix[i] = (Data *)malloc(2 * MAXTAM * sizeof(Data)); // cria coluna

    CriarMatrix(matrix);
    Abre_arq(matrix);

    end = clock();

    double time_taken = (end - start) / (CLOCKS_PER_SEC);
    printf("O tempo gasto do programa foi : %0.10f seg\n", time_taken);

    return 0;
}
