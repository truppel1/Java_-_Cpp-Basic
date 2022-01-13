#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int x;
    double soma, div, media;
    div = 0;
    media = 0;
    soma = 0;
    x = 0;

    printf("Digite as idades: \n");
    scanf("%d", &x);

        if (x < 0) {
        printf("IMPOSSIVEL CALCULAR.");
    }

    while (x > 0) {
        soma = x + soma;
        div = div + 1;
        scanf("%d", &x);
    }

    if (soma > 0) {
    media = soma / div;
    printf("MEDIA = %.2lf", media);
    }

    return 0;
    }
