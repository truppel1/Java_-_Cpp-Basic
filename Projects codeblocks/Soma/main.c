#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    int x;
    int i;
    int soma;

    printf("Quantos numeros serao digitados: ");
    scanf("%d", &n);

    soma = 0;

    for (i = 1; i <= n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);
        soma = soma + x;
    }

    printf("SOMA: %d\n", soma);

    return 0;
}
