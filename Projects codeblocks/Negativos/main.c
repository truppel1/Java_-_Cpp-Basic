#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N, i;

    printf("Quantos numeros serao digitados? ");
    scanf("%d", &N);

    int vet[N];

    for (i = 1; i <= N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
        }

        printf("NUMEROS NEGATIVOS: \n");

    for (i = 1; i <= N; i++) {
        if ( vet[i] < 0) {
            printf("%d\n", vet[i]);
        }
        }

    return 0;
}
