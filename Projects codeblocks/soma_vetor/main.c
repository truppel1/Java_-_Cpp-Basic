#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, n;
    double soma, media;

    soma = 0;
    media = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for (i = 1; i <= n; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nVALORES = ");

    for (i = 1; i <= n; i++){
        printf(" %.1lf ", vet[i]);
    }

    for (i = 1; i <= n; i++){
        soma = vet[i] + soma;
    }

    printf("\nSOMA = %.1lf", soma);

    media = soma / n;

    printf("\nMEDIA = %.1lf", media);

    return 0;
}
