#include "matrix.h"

void CriarMatrix(Data **m)
{
    for (int i = 0; i < MAXTAM; i++)
    {
        for (int j = 0; j < MAXTAM; j++)
            m[i][j].valor = 0;
    }
}

void PreencherMatrix(int i, int j, double num, Data **m)
{
    m[i][j].valor = num;
}

void ImprimirMatrix(Data **m, int linha, int coluna)
{
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
            printf("%0.2f ", m[i][j].valor);
        printf("\n");
    }
    printf("\n");
}

// função que retorna o inverso da m
void InversaMatrix(Data **m, FILE *texto, int f)
{
    bool valor;
    // printf("\n=== Matriz Original ===\n");
    // ImprimirMatrix(m, MAXTAM, 2 * MAXTAM);

    AumentaMatrix(m);

    // printf("\n=== Matriz Aumentada ===\n");
    // ImprimirMatrix(m, MAXTAM, 2 * MAXTAM);

    OrdenaMatrix(m);

    // printf("\n=== Matriz Ordenada ===\n");
    // ImprimirMatrix(m, MAXTAM, 2 * MAXTAM);

    valor = EscalonaMatrix(m);

    // printf("\n=== Matriz Escalonada 2 ===\n");
    // ImprimirMatrix(m, MAXTAM, 2 * MAXTAM);

    Data **inversa = CriaInversa(m);

    MatrixFinal(m, inversa);

    // printf("\n=== Matriz Inversa ===\n");
    // ImprimirMatrix(inversa, MAXTAM, MAXTAM);

    // salva inversa em resultado.txt

    fprintf(texto, "%d\n", f);

    if (!valor)
    {
        fprintf(texto, "Não há determinante.\n");
    }
    else
    {
        for (int i = 0; i < MAXTAM; i++)
        {
            for (int j = 0; j < MAXTAM; j++)
            {
                fprintf(texto, "%f ", inversa[i][j].valor);
            }
            fprintf(texto, "\n ");
        }
        fprintf(texto, "\n ");
    }

    // preenche a matriz com zeros
    LimpaMatrix(m, MAXTAM, 2 * MAXTAM);
    LimpaMatrix(inversa, MAXTAM, MAXTAM);
    LiberaMatrix(inversa);
}

void AumentaMatrix(Data **m)
{
    // cria a m aumentada e adiciona a m identidade no final dela
    for (int i = 0; i < MAXTAM; i++)
    {
        for (int j = 0; j < 2 * MAXTAM; j++)
        {
            if (j == (i + MAXTAM))
                m[i][j].valor = 1.0;
        }
    }
}

void OrdenaMatrix(Data **m)
{
    // ordena a m
    for (int i = MAXTAM - 1; i > 0; i--)
    {
        if (m[i - 1][0].valor < m[i][0].valor)
        {
            Data *temp = m[i];
            m[i] = m[i - 1];
            m[i - 1] = temp;
        }
    }
}

bool EscalonaMatrix(Data **m)
{
    // função para fazer o escalonamento da m
    double temp;
    bool valor = true;
    ;

    for (int i = 0; i < MAXTAM; i++)
    {
        for (int j = 0; j < MAXTAM; j++)
        {
            if (j != i)
            {
                if (isnan(m[i][i].valor))
                {
                    valor = false;
                    return valor;
                }
                else
                {
                    temp = m[j][i].valor / m[i][i].valor;
                    for (int k = 0; k < 2 * MAXTAM; k++)
                    {
                        m[j][k].valor -= m[i][k].valor * temp;
                    }
                }
            }
        }
    }

    // printf("\n=== Matriz Escalonada 1 ===\n");
    // ImprimirMatrix(m, MAXTAM, 2 * MAXTAM);

    for (int i = 0; i < MAXTAM; i++)
    {
        temp = m[i][i].valor;
        for (int j = 0; j < 2 * MAXTAM; j++)
            m[i][j].valor = m[i][j].valor / temp;
    }

    return valor;
}

Data **CriaInversa(Data **m)
{
    Data **inversa = malloc(MAXTAM * sizeof(Data *));

    for (int i = 0; i < MAXTAM; i++)
        inversa[i] = (Data *)malloc(MAXTAM * sizeof(Data));

    CriarMatrix(inversa);

    return inversa;
}

void MatrixFinal(Data **m, Data **i)
{
    int v = 0;
    for (int k = 0; k < MAXTAM; k++)
    {
        v = 12;
        for (int j = 0; j < MAXTAM; j++)
        {
            PreencherMatrix(k, j, m[k][v].valor, i);
            v++;
        }
    }
}

void LimpaMatrix(Data **m, int linha, int coluna)
{
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
            m[i][j].valor = 0;
    }
}

void LiberaMatrix(Data **m)
{
    for (int i = 0; i < MAXTAM; ++i)
    {
        free(m[i]);
    }

    free(m);
}

void PassarMatrix(Data **aux, Data **m, int linha)
{
    // printf("m: \n");
    for (int i = linha; i < MAXTAM; i++) // linha
    {
        for (int j = 0; j < MAXTAM; j++) // coluna
        {
            m[i - 1][j].valor = aux[i][j].valor;
            // printf("%0.2f ", m[i][j].valor);
        }
        // printf("\n");
    }
    // printf("\n");
}
