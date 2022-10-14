#ifndef MATRIX_H
#define MATRIX_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#include <stdbool.h>
#include <time.h>

#define MAXTAM 12

typedef struct data
{
    double valor;
} Data;

void CriarMatrix(Data **m);
void PreencherMatrix(int i, int j, double num, Data **m);
void ImprimirMatrix(Data **m, int i, int j);
void InversaMatrix(Data **m, FILE *fp, int f);
void AumentaMatrix(Data **m);
void OrdenaMatrix(Data **m);
bool EscalonaMatrix(Data **m);
Data **CriaInversa(Data **m);
void MatrixFinal(Data **m, Data **i);
void LimpaMatrix(Data **m, int linha, int coluna);
void LiberaMatrix(Data **m);
void PassarMatrix(Data **aux, Data **m, int linha);

#endif