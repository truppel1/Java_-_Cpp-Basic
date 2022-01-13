#include <stdio.h>
#include <math.h>

int main()
{

    double base, altura, area, perimetro, diagonal, raiz;

    area = 0;
    perimetro = 0;
    diagonal = 0;
    raiz = 0;

    printf("Base do retangulo: ");
    scanf("%lf", &base);

    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = (base * 2) + (altura * 2);
    raiz = pow(base, 2.0) + pow(altura, 2.0);
    diagonal = sqrt(raiz);

    printf("\nAREA: %.4lf\n", area);
    printf("PERIMETRO: %.4lf\n", perimetro);
    printf("DIAGONAL: %.4lf\n", diagonal);

    return 0;
}
