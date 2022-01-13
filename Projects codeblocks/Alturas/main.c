#include <stdio.h>
#include <stdlib.h>
#include <string.h>


   void ler_texto(char *buffer, int length) {
 	fgets(buffer, length, stdin);
 	strtok(buffer, "\n");
   }
   void limpar_entrada() {
 	char c;
 	while ((c = getchar()) != '\n' && c != EOF) {}
   }

int main()
{

    int n, i;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nome[n][50];
    double idade[n];
    double altura[n];

    for (i = 1; i <= n; i++){
        printf("Dados da %da pessoa: \n", i);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);

        printf("Idade: ");
        scanf("%lf", &idade[i]);

        printf("Altura: ");
        scanf("%lf", &altura[i]);

    }

    double media, menor, soma, porcento;
    media = 0;
    soma = 0;
    menor = 0;
    porcento = 0;

    for (i = 1; i <= n; i++){
        soma = altura[i] + soma;
            if (idade[i] < 16) {
                menor = menor + 1;
            }
    }

    porcento = menor * 100 / n;
    media = soma / n;

    printf("\n");

    printf("Altura media: %.2lf\n", media);
    printf("Pessoas com menos de 16 anos: %.1lf %%", porcento);
    for (i = 1; i <= n; i++){
        if (idade[i] < 16) {
            printf("\n");
            printf(nome[i]);
        }
    }

    return 0;
}
