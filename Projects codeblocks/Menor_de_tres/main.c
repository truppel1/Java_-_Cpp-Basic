#include <stdio.h>
#include <math.h>

int main()
{

    int x, y, z, menor;

    printf("Primeiro valor: ");
    scanf("%d", &x);
    printf("Segundo valor: ");
    scanf("%d", &y);
    printf("Terceiro valor: ");
    scanf("%d", &z);

    if ( x < y && x < z )  {
        menor = x;
    }
    else if (y < z)  {
        menor = y;
    }
    else {
        menor = z;
    }

    printf("MENOR = %d", menor);
    return 0;
}
