#include <stdio.h>
#include <math.h>

int main()
{
    int loop;
    double nota1, nota2, notafinal;
    notafinal = 0;
    loop = 1;

while (loop != 0) {
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    notafinal = (nota1 + nota2);
    printf("NOTA FINAL: %.1lf\n", notafinal);

    if (notafinal < 60) {
        printf("REPROVADO!\n");
    }
    else {
        printf("APROVADO!\n");
    }

    printf("quer continuar digite 1:");
    scanf("%d", &loop);

}
    return 0;
    }
