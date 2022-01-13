#include <iostream>

using namespace std;

int main()
{
    int loop;

    while (loop != 0){
    int i, x, y, menor, soma;

    cout << "\nDigite dois numeros: " << endl;
    cin >> x;
    cin >> y;

    if (x > y) {
        menor = x;
        x = y;
        y = menor;
    }

    soma = 0;

    for ( i = x+1; i < y; i++){
        if ( i % 2 != 0) {
        soma = i + soma;
    }
    }

    cout << "SOMA DOS IMPARES = " << soma;
    }

    return 0;
}
