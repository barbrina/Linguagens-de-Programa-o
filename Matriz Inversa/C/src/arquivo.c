#include "arquivo.h"

/*void Abre_arq(Data **matrix)
{
    char frase[300], *token;
    double temp;
    int linha = 0, coluna = 0;
    int f = 1;

    FILE *arq;
    arq = fopen("matrix.csv", "r");

    // abre um arquivo texto para Leitura
    if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo.\n");
        return;
    }

    FILE *texto;
    texto = fopen("resultado.txt", "w");

    if (texto == NULL)
    {
        printf("Problemas na abertura do arquivo.\n");
        return;
    }

    fgets(frase, 300, arq); // retira primeira linha
    while (fgets(frase, 300, arq) != NULL)
    {
        coluna = 0;
        int palavra = 0;

        if (linha < 12)
        {
            token = strtok(frase, ",");
            while (token)
            {
                if (palavra != 0) //
                {
                    token = remove_aspas(token);                  // remove aspas da palavra
                    temp = atof(token);                           // transforma palavra em número de ponto flutuante
                    PreencherMatrix(linha, coluna, temp, matrix); // Preenche a matrix com os valores
                    coluna++;
                }
                token = strtok(NULL, ",");
                palavra++;
            }
            linha++;
        }

        if (linha == 12)
        {
            linha = 0;
            InversaMatrix(matrix, texto, f++);
            CriarMatrix(matrix);
        }
    }

    fclose(texto);

    // abre arquivo resultado para leitura das matrizes inversas
    // texto = fopen("resultado.txt", "r");

    // char matriz[300];
    // while (fgets(matriz, 300, texto) != NULL)
    //{
    //     printf("%s", matriz);
    // }
}*/

/*void Abre_arq(Data **matrix)
{
    Data **aux;
    char frase[300], *token;
    double temp;
    int linha = 0, coluna = 0, i = 0, f = 1, control = 0;

    FILE *arq;
    arq = fopen("matrix.csv", "r");

    // abre um arquivo texto para Leitura
    if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo.\n");
        return;
    }

    FILE *texto;
    texto = fopen("resultado.txt", "w");

    if (texto == NULL)
    {
        printf("Problemas na abertura do arquivo.\n");
        return;
    }

    fgets(frase, 300, arq); // retira primeira linha
    while (fgets(frase, 300, arq) != NULL)
    {
        coluna = 0;
        int palavra = 0;
        if (linha < 12)
        {
            token = strtok(frase, ",");
            while (token)
            {
                if (palavra != 0) //
                {
                    token = remove_aspas(token);                  // remove aspas da palavra
                    temp = atof(token);                           // transforma palavra em número de ponto flutuante
                    PreencherMatrix(linha, coluna, temp, matrix); // Preenche a matrix com os valores
                    coluna++;
                }
                token = strtok(NULL, ",");
                palavra = 1; // pula primeira coluna de data e hora
            }
            linha++;
            if (control < 0)
            {
                ImprimirMatrix(aux, MAXTAM, MAXTAM);
                InversaMatrix(aux, texto, f++);
            }
            control++;
        }

        if (linha == 12)
        {
            if (control > 0)
            {
                InversaMatrix(matrix, texto, f++);
                control -= 2;
            }
            aux = matrix;
            PassarMatrix(aux, matrix, 1);
            aux = matrix;
            linha -= 1;
        }
    }

    fclose(texto);
}*/

void Abre_arq(Data **matrix)
{
    char frase[300], *token;
    double temp;
    int linha = 0, coluna = 0, cont = 1;
    int f = 1;

    FILE *arq;
    arq = fopen("matrix.csv", "r");

    // abre um arquivo texto para Leitura
    if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo.\n");
        return;
    }

    FILE *texto;
    texto = fopen("resultado.txt", "w");

    if (texto == NULL)
    {
        printf("Problemas na abertura do arquivo.\n");
        return;
    }

    fgets(frase, 300, arq); // retira primeira linha
    while (fgets(frase, 300, arq) != NULL)
    {
        coluna = 0;
        int palavra = 0;

        if (linha < 12)
        {
            token = strtok(frase, ",");
            while (token)
            {
                if (palavra != 0) //
                {
                    token = remove_aspas(token);                  // remove aspas da palavra
                    temp = atof(token);                           // transforma palavra em número de ponto flutuante
                    PreencherMatrix(linha, coluna, temp, matrix); // Preenche a matrix com os valores
                    coluna++;
                }
                token = strtok(NULL, ",");
                palavra++;
            }
            linha++;
        }

        if (linha == 12)
        {
            linha = 0;
            InversaMatrix(matrix, texto, f++);
            CriarMatrix(matrix);
            cont++;
            if (cont == 25)
                break;
            rewind(arq);
            for (int i = 0; i < cont; i++)
            {
                fgets(frase, 300, arq); // retira primeiras linhas
            }
        }
    }
    fclose(texto);
}

char *remove_aspas(char *palavra)
{
    if (palavra[0] == '"')
    {
        if (palavra[strlen(palavra) - 1] == '"')
            palavra[strlen(palavra) - 1] = '\0';
        else if (palavra[strlen(palavra) - 2] == '"')
            palavra[strlen(palavra) - 2] = '\0';

        return palavra + 1;
    }

    return palavra;
}
