#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, i, resultado;
    n = 0;
    i = 0;
    resultado = 0;

    printf("Deseja a tabuada para qual valor:");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
    resultado = n * i;
    printf("%d x %d = %d\n", n, i, resultado);
    }

    return 0;
}
