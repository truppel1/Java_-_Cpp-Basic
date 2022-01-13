#include <stdio.h>
#include <stdlib.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{

    int hora;

    printf("Digite uma hora do dia: ");
    scanf("%i", &hora);

    if (hora < 12)
    {
        printf("Bom dia!\n");
    }
    else {
        printf("Boa Tarde!\n");
    }

return 0;
}
