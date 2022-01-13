#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i, j, soma;

    soma = 0;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("ELEMENTO [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("DIAGONAL PRINCIAL:\n");

    for (i = 0; i < n; i++) {
        printf(" %d ", mat[i][i]);
        }

    for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
        if ( mat[i][j] < 0) {
            soma = soma + 1;
        }
        }
        }

    printf("\n QUANTIDADE DE NEGATIVOS = %d", soma);

    return 0;
}
